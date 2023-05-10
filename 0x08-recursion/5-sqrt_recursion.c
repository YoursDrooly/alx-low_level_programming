#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - calculates natural square root
 * @n: number to square
 * Return: If outcome is not natural square, return -1, else the outcome
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function to square
 * @n: input number to square
 * @i: iterator
 * Return: outcome
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
