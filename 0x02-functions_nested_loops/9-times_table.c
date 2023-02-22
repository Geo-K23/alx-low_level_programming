#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int num, num9, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (num9 = 1; num9 <= 9; num9++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * num9;
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
