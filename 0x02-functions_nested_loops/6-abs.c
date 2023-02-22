#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @x: is the integer to be computed
 * Return: the absolute value of the integer
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}
