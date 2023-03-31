#include <stdio.h>
#include "lists.h"
/**
 * print_before_main - prints characters before the main function
 * __attribute__((constructor)) - makes print_before_main run before main
 * Return: void
 */
void __attribute__((constructor)) print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
