#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds the first occurrence of the substring needle in the,
 *  string haystack
 *  @haystack: pointer to the main string to be examined
 *  @needle: pointer to the substring to be searched in haystack string
 *
 *  Return: pointer to the beginning of the located substring,
 *  or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
