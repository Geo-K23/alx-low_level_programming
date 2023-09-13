#include "search_algos.h"
/**
 * print_array - prints an array of integers
 * @array: pointer to the array to be printed
 * @size: size of array
 *
 * Return: Nothing
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers,
 * using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the index where value is located, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t k, r, i;

	if (array == NULL)
		return (-1);
	for (k = 0, r = size - 1; r >= k;)
	{
		printf("Searching in array: ");
		for (i = k; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = k + (r - k) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			k = i + 1;
	}
	return (-1);
}
