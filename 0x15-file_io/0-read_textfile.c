#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: is the name of the file to read
 * @letters: is the number of letters to read and print
 * Return: the actual number of letters read and printed, 0 if an error occured
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_rd, bytes_wr;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_rd = read(fd, buffer, letters);
	if (bytes_rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_wr = write(STDOUT_FILENO, buffer, bytes_rd);
	if (bytes_wr == -1 || bytes_wr != bytes_rd)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_wr);
}
