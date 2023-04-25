#include "main.h"

void print_alphabet_x10(void)
{
	for (int i; i < 10; i++)
	{
		for (char c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
