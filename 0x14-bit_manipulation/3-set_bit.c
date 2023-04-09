#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: is a pointer to the bit to set to 1
 * @index:  is the index, starting from 0 of the bit to set to 1
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	num = 1 << index;
	*n |= num;
	return (1);
}
