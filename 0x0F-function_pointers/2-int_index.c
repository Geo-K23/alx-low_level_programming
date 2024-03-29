#include "function_pointers.h"
/**
 * int_index -  searches for an integer
 * @array: array to be searched
 * @size: size of array
 * @cmp: is a pointer to the comparison function
 *
 * Return: index of the first element for which the cmp function,
 * does not return 0, -1 if no element matches or if size <= 0
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && size && array)
	{
		for (i = 0; i <= size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
