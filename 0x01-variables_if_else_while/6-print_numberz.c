#include <stdio.h>
/**
 * main -is the entry for the program
 * Return:zero if successful, other value if unsuccessful
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
