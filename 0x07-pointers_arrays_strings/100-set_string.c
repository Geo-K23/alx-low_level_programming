#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: is the pointer to a pointer to a char s
 * @to: is the pointer to a char to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
