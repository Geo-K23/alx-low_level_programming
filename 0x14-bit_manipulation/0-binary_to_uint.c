#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is a pointer to a string of 0 and 1 chars
 * Return: converted number or 0 if chars in string are not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	for (; *b; b++)
	{
		if (*b == '0' || *b == '1')
		{
			num <<= 1;
			num += (*b - '0');
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
