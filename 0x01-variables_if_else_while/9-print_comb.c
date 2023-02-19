#include <stdio.h>
/**
 * main - prints all single-digit numbers, separated by comma
 * printed in ascending order
 * Return: 0, if successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
