#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * Return: destination string if successful, NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	result = malloc(len1 + len2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < len2 + 1; i++)
	{
		result[len1 + i] = s2[i];
	}
	return (result);
}
