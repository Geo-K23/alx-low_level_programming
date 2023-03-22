#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to function that prints name
 */
#include <stdio.h>
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void(*action)(int));

#endif /* FUCNTION_POINTERS_H */
