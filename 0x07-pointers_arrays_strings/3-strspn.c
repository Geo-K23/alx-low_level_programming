#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: is a pointer to the string
 * @accept: is a pointer to the string accept
 *
 * Return: returns number of bytes in the initial segment s,
 *  consisting of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count, bytes;

	bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				bytes++;
				count = 1;
			}
		}
		if (count == 0)
		{
			return (bytes);
		}
	}
	return (bytes);
}
