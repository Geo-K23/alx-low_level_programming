#include "main.h"
/**
 * _strcpy - copies src string onto dest
 * @src: string to be copied
 * @dest: buffer to be copied onto
 * Return: A pointer to the destination buffer @dest
 */
char *_strcpy(char *dest, char *src)
{
	int = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
