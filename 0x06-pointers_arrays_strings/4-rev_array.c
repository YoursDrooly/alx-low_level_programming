#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: array to be reversed
 * @n: array length
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
