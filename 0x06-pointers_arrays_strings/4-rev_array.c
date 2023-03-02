#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to an array whose content is to be reversed
 * @n: is the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	temp = 0;
	n = n - 1;
	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
