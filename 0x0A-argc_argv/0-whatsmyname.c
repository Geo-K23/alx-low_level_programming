#include <stdio.h>
/**
 * main - is the entry for the program
 * @argc: is argument count
 * @argv: is argument vector, an array of pointers to the arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	char *program_name = argv[0];
	(void)argc;

	printf("%s\n", program_name);
	return (0);
}
