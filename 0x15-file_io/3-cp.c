#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * check_args - checks for the right number of arguments
 * @argc: is number of arguments
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * check_file_from - checks if file_from exists and can be read
 * @check: checks for true or false
 * @file: name of file_from
 * @fd_from: file descriptor for file_from
 * @fd_to: file descriptor for file_to
 */
void check_file_from(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}
/**
 * check_file_to - checks if file_to was created or written to
 * @check: checks for true or false
 * @file: name of file_to
 * @fd_from: file descriptor for file_from
 * @fd_to: file descriptor for file_to
 */
void check_file_to(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}
/**
 * check_close - checks if file descriptors were closed
 * @check: checks for true or false
 * @fd: is the file descriptor
 */
void check_close(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file.
 * @argc: is the number of arguments passed to the program
 * @argv: is array of pointers to the arguments
 * Return: 0 for success, 97, 98, 99, 100, if an error occurred
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_1, close_2;
	ssize_t num_rd, num_wr;
	char buffer[1024];

	check_args(argc);
	fd_from = open(argv[1], O_RDONLY);
	check_file_from((ssize_t)fd_from, argv[1], -1, -1);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check_file_to((ssize_t)fd_to, argv[2], fd_from, -1);
	num_rd = 1024;
	while (num_rd == 1024)
	{
		num_rd = read(fd_from, buffer, 1024);
		check_file_from(num_rd, argv[1], fd_from, fd_to);
		num_wr = write(fd_to, buffer, num_rd);
		if (num_wr == -1)
		{
			check_file_to(num_wr, argv[2], fd_from, fd_to);
		}
	}
	close_1 = close(fd_from);
	close_2 = close(fd_to);
	check_close(close_1, fd_from);
	check_close(close_2, fd_to);
	return (0);
}
