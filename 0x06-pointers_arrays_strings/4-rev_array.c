#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: array to be reversed
 * @n: array length
 * Return: reversed array
 */

void reverse_array(int *a. int n)
{
	int i, j, tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
