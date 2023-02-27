#include "main.h"

/**
 * _puts - prints a string
 * @str: The string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(*str);
		str++;
	}
	_puts('\n');
}
