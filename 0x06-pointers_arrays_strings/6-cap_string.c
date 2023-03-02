#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string whose words will be capitalized
 * Return: returns the pointer to the modified string
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - ('a' - 'A');
	}
	while (str[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
			if (str[i - 1] == sep[j] && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= ('a' - 'A');
		i++;
	}
	return (str);

}
