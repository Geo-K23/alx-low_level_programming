#include <stdio.h>
/**
 * main -is the entry point for the program
 * Return:zero if successful, other value if unsuccessful
 */
int main(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(c);
		c++;
	}

	c = 'A';

	for (i = 0; i < 26; i++)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);

}
