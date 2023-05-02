#include "main.h"

/**
 * puts2 - prints every other character after the first character
 * @str: string as an array
 * Return: string wioth every other character
 * Ends on a new line
 */
void puts2(char *str)
{
	int i;
	int j;

	j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i <= j; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
