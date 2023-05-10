#include "main.h"

/**
 * _pow_recursion - returns value of x raised tothe power of y
 * @x: input value
 * @y: input value of power exponent
 * Return: if y is < 0, return -1, otherwise return outcome
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
