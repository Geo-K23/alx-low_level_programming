#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array of integers
 * @a: is an array of integers
 * @n: is the number of elements in the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
