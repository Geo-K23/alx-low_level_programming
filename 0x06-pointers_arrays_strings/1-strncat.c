#include "main.h"
/**
 * _strncat - concatenates two strings with at most n bytes from @src
 * @dest: string to append @src onto
 * @src: string to append to @dest
 * @n: number of bytes from @src
 * Return: returns a pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
