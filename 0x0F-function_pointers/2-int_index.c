#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index- searches for integer
 * @array: array to search
 * @size: number of elements in array
 * @cmp: pointer to function that compares values
 * Return: 1 if no matches, -1 is size is <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
