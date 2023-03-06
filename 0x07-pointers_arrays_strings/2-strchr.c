#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: is a pointer to the string
 * @c: is the character to search for
 *
 * Return: returns a pointer to the character if it is found,
 * returns NULL otherwise
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
