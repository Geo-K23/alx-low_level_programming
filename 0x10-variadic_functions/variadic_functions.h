#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct print - print type with associated print function
 * @type: indicated data type
 * @func: function pointer to function to print
 */

typedef struct print
{
	char *type;
	void (*func)(va_list arg);
} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
