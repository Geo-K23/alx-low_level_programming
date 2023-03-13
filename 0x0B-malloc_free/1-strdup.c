#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - eturns a pointer to a newly allocated space in,
 * memory, which contains a copy of the string given as a parameter.
 * @str: is the string that is duplicated to make a copy
 * Return: a pointer to the duplicated string (copy), NULL otherwise
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Empty loop body */
	}
	copy = malloc(i * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		copy[j] = str[j];
	}
	return (copy);
}
