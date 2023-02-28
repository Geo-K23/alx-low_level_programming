#include "main.h"
/**
 * puts2 - prints every other character of a string on a new line
 * @str: a string whose characters are to be printed
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i++])
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
