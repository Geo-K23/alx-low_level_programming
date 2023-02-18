#include <stdio.h>
/**
 * main -is entry in the program
 * Return:zero if successful, other value if unsuccessful
 */
int main(void)
{
	char letter = 'a';
	int i;

	i = 0;

	while (i < 26)
{
	putchar(letter);
	i++;
	letter++;
}
	putchar('\n');
	return (0);
}

