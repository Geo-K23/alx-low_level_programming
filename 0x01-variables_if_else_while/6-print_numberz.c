#include <stdio.h>
#include <ctype.h>
/**
 * main -prints all single digit numbers of base 10
 * Return: 0, if successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10 + '0'));
	putchar('\n');
	return (0);
}
