#include "main.h"
/**
 * print_line - prints a line on the terminal
 * @n: is the number of times the character '_' is printed
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (int length = 0; length <= n; length++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
