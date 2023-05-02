#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a : input A
 * @b : input B
 * Return : A and B swapped
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
