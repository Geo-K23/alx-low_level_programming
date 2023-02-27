#include "main.h"
/**
 * swap_int - swaps the values of integers a and b
 * @a: first integer whose value is to be swapped
 * @b: second integer whose value is to be swapped
 */
void swap_int(int *a, int *b)
{
	int temp = *a;/* first store the value of a in a temporary variable temp */
	*a = *b;/* set the value of a to equal to b */
	*b = temp;/* set the value of b to the temporary variable */
}

