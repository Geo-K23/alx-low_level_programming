#include <stdio.h>
#include <stdlib.h>
/**
 * main - is the entry for the program
 * @argc: is the number of arguments passed to the program
 * @argv: is an array of strings that holds the arguments passed to the program
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int cents, num_coins = 0;

	if (argc != 2)/* Check if exactly one argument is passed */
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);/* Parse the argument as an integer */
	if (cents < 0)/* Check if the integer is negative */
	{
		printf("0\n");
		return (0);
	}
	/* Calculate the minimum number of coins required */
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		num_coins++;
	}
	printf("%d\n", num_coins);/* Print the result */
	return (0);
}
