#include <stdio.h>
/**
 * main -is the entry for the program
 * Return:zero if successful, other value if unsuccessful
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
