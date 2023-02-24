#include "main.h"
/**
 * print_square - prints a square using # character
 * @size: is the size of the square
 */
void print_square(int size)
{
	int l, w; /* l is length and w is width of the square */

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar('#');
			}
			if (l == size - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
