#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: is the string to be converted
 * Return: The integer value of the converted string
 */
int _atoi(char *s)
{
	int i, b, n, len, k, digit;

	i = 0;
	b = 0;
	n = 0;
	len = 0;
	k = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && k == 0)
	{
		if (s[i] == '-')
			++b;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (b % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			k = 0;
		}
		i++;
	}
	if (k == 0)
		return (0);
	return (n);
}
