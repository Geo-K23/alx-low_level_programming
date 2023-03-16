#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: size in bytes of the new string
 * Return: pointer to newly allocated space in memory, or else NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int i = 0;
	char *new_str;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0' && s2_len < n)
	{
		s2_len++;
	}
	new_str = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		new_str[i] = s1[i];
	}
	for (i = 0; i < s2_len; i++)
	{
		new_str[s1_len + i] = s2[i];
	}
	new_str[s1_len + s2_len] = '\0';
	return (new_str);
}
