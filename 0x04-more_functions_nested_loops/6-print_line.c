#include "main.h"
/**
 * print_line - prints a line on the terminal
 * @n: is the number of times the character '_' is printed
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
