#include "main.h"
/**
 * print_triangle - prints the triangle using the # character
 * @size: is the size of the triangle
 */
void print_triangle(int size)
{
	int h, b;/* h is height of the triangle and b is its base */

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (b = size - h; b > 0; b--)
			{
				_putchar(' ');
			}
			for (b = 0; b < h; b++)
			{
				_putchar('#');
			}
			if (h == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
