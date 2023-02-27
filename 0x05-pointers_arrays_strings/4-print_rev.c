#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: is the string to be printed in reverse
 */
void print_rev(char *s)
{
	int length, rev;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (rev = length - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
