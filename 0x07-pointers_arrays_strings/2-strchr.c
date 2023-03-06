#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: is a pointer to the string to be searched
 * @c: is the character to search for
 *
 * Return: a pointer to the character if c is found, NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
