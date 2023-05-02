#include "main.h"

/**
 * puts_half - prints second half of string
 * if string has odd numbers, minus 1 and then half
 * @str: str to split
 * Return: halved string
 * Ends on new line
 */

void puts_half(char *str)
{
	int i, j, k;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		for (j = i / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else if (i % 2)
	{
		for (k = (i - 1) / 2; k < i - 1; k++)
		{
			_putchar(str[k + 1]);
		}
	}
	_putchar('\n');
}
