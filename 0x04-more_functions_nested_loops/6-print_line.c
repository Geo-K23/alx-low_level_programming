#include "main.h"
/**
 * print_line - prints a line on the terminal
 * @n: is the number of time the character '_' is printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
