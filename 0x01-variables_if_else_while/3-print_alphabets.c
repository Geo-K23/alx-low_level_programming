#include <stdio.h>
#include <ctype.h>
/**
 * main -is the entry of the program
 * Return:zero if successful, other value if unsuccessful
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(toupper(c));
	}
	putchar('\n');
	return (0);
}
