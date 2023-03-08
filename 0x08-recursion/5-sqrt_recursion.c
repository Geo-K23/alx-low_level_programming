#include "main.h"
/**
 * sqrt_find - checks for the square root of a given number
 * @n: is the root to check through
 * @i: is the number whose square root is to be determined
 * Return: the square root of i, or -1 if number has no natural sqrt
 */
int sqrt_find(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (sqrt_find(n, i + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: is the number whose sqrt is to be determined
 * Return: natural square root or -1, if not natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_find(n, 1));
	}
}
