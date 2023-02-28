#include "main.h"
/**
 * rev_string - reverses a string
 * @s: is the string to be reversed
 */
void rev_string(char *s)
{
	int rev = 0, len = 0;
	char temp;

	while (s[rev++])
	{
		len++;
	}
	for (rev = len - 1; rev >= len / 2; rev--)
	{
		temp = s[rev];
		s[rev] = s[len - rev - 1];
		s[len - rev - 1] = temp;
	}

}
