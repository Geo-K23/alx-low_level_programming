#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - locates the first occurrence in the string s,
 *  of any bytes in the string accept
 *  @s: pointer to the string to be scanned
 *  @accept: pointer to the string containing the characters to match
 *  Return: returns a pointer to the byte in s that matches one of the bytes,
 *  in accept, or NULL if there is no match
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
