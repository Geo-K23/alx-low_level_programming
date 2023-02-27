#include "main.h"
/**
 * _puts - prints a string on stdout
 * @str: is the string to be printed
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
