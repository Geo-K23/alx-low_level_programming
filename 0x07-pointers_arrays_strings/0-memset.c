#include "main.h"
/**
 * _memset - fills the first n bytes of memory pointed to by s with the,
 *  constant byte b
 *  @s: pointer to the memory address of b
 *  @b: is the value at the memory address
 *  @n: is the number of bytes to be filled by b
 *
 *  Return: returns the pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
