#include <stdio.h>
#include <ctype.h>
/**
 * main - prints lower case alphabet in reverse
 * Return: 0, if successful
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
