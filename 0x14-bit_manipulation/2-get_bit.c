#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: bits to be determined
 * @index: is the index of the bit to be obtained
 * Return: the value of the bit at a given index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
