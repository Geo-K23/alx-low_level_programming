#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to bit that will be set to 0
 * @index: is the index, starting from 0 of the bit that will be set
 * Return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	num = ~(1 << index);
	*n &= num;
	return (1);
}
