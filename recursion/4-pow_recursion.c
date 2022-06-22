#include "main.h"

/**
 * _pow_recursion - returns the value of x to the power of y
 *
 * @x: value to raise to the power of y
 * @y: power
 * Return: x pow y (or -1 if x < 0)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
