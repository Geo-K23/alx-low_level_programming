#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: is the minimum value of the range we want to create
 * @max: is the maximum value of the range we want to create
 * Return: the pointer to the newly created array, or else NULL
 */
int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
