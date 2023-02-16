#include <stdio.h>
/**
 * main - initializes the program
 * Return:zero if no erros,non zero with errors
 */
int main(void)
{
	printf("Size of a char:%d byte(s)\n", sizeof(char));
	printf("Size of an int:%d byte(s)\n", sizeof(int));
	printf("Size of a long int:%d byte(s)\n", (unsigned int)sizeof(long int));
	printf("Size of a long long int:%d byte(s)\n", (unsigned int)sizeof(long long int));
	printf("Size of a float:%d byte(s)\n", sizeof(float));
	return (0);
}
