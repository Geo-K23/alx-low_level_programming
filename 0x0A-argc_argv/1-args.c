#include <stdio.h>
/**
 * main - is entry for the program
 * @argc: is argument count
 * @argv: is argument vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
