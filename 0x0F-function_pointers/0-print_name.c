#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: person's inputted name
 * @f: pointer to a function of characters in name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
