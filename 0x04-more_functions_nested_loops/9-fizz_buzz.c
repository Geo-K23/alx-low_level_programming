#include <stdio.h>
/**
 * main - prints numbers 1 to 100 replacing multiples of 3 with Fizz,
 * 5 with Buzz and FizzBuzz for multiples of 3 and 5
 * Return: 0 if successful
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		if (num != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
