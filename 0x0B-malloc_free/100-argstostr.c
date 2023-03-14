#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of my program
 * @ac: is the number of arguments
 * @av: is the pointer to array of strings containing the arguments
 * Return: pointer to the new string, NULL otherwise
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *str;

	/* Return NULL if ac == 0 or av == NULL */
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/* Compute the length of the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			k++;
		}
		k++;
	}
	/* Allocate memory for the new string */
	str = malloc((k + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	/* Concatenate the arguments into the new string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
