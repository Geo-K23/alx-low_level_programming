#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_i - prints an int
 * @i: int to print
 *
 * Return: void
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_c - print a char
 * @c: char to print
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_f - prints a float
 * @f: float to print
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_s - prints a string
 * @s: string to print
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything, followed by a new line.
 * @format: list of argument types passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int j, i;
	va_list args;
	char *separator = "";

	print_t struc[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(args, format);

	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (struc[j].type != NULL)
		{
			if (*(struc[j].type) == format[i])
			{
				printf("%s", separator);
				struc[j].func(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}
