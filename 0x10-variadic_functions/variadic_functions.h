#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: is the number of parameters
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
