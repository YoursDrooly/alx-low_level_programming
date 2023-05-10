#includes "main.h"

/**
 * _print_rev_recursion - prints a str in reverse
 * @s: string to print in reverse
 * Return: print string in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
