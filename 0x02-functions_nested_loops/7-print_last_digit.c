#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n : is the given number
 * Return: the value of the last digit if successful
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;/* converts last digit to +ve if it's -ve */
	_putchar(last_digit + '0');
	return (last_digit);
}
