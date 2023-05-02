#include "main.h"
#include <stdio.h>

/**
 * print_array - prints specified elements of an integer array
 * @n: number of elements to print
 * @a: array of integers
 * Return: printed array
 * Ends on a new line
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
