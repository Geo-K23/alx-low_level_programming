#include "main.h"
/**
 * print_numbers - prints numbers 0 to 9
 * Return: 0 if successful
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}

