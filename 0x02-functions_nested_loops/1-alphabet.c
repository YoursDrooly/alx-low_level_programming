#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return - on success 0
 */

/* logic */
void print_alphabet(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}

/* calls the print_alphabet function */
int main(void)
{
	print_alphabet();
	return (0);
}
