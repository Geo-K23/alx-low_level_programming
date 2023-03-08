#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: is the value that will be raised to the power of y
 * @y: is the value of the power
 * Return: the value of x raised to the power of y, 1 if y is 0,
 * and -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);/* return 1 if y is 0 */
	}
	else if (y < 0)
	{
		return (-1);/* return -1 if y is negative */
	}
	return (x * _pow_recursion(x, y - 1));/* recursively call function,
						* with y decremented
						*/
}
