#include "main.h"

/**
 * print_line - draws horizontal line for n > 0
 * @n: length of line
 * adds a new line at the end
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
