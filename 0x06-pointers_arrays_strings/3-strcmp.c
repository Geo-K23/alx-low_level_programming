#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: is the pointer to the first string
 * @s2: is the pointer to the second string
 * Return: positive, if s1 > s2,
 * 0, if s1 equals s2,
 * negative, if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

