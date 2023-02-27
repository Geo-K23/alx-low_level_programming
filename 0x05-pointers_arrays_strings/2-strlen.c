#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: is the value of the string whose length is to be determined
 * Return: returns the length of the string @s
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')/* array count is not equal to the last,
			       * count of the string
			       */
	{
		len++;/* count the length from zero */
	}
	return (len);
}
