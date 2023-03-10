#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - is the entry for the program
 * @argc: is argument count
 * @argv: is argument vector
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		while (*arg != '\0')
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
