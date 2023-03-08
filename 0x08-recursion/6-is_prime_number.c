#include "main.h"
/**
 * check_prime - recursively checks if n is divisible by any number,
 * other than 1 and n-1
 * @n: is the input integer
 * @divisor: checks for divisibility
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (check_prime(n, divisor - 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: input integer
 * Return: 1 if integer is prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (check_prime(n, n - 1));
}
