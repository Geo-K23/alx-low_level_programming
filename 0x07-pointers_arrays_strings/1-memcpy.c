#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: is the destination memory area
 * @src: is the source memory area
 * @n: is the number of bytes to be copied
 *
 * Return: returns the pointer to destination area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
