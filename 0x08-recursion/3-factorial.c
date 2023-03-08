#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: is the number whose factorial is to be determined
 * Return: factorial of the number, 1 for factorial of 0,
 * and -1 for error
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
