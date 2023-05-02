#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int j, k, x, i, y, digit;

	j = 0;
	k = 0;
	x = 0;
	i = 0;
	y = 0;
	digit = 0;

	while (s[i] != '\0')
		i++;

	while (j < i && y == 0)
	{
		if (s[j] == '-')
			++k;

		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (k % 2)
				digit = -digit;
			x = x * 10 + digit;
			y = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			y = 0;
		}
		j++;
	}

	if (y == 0)
		return (0);

	return (x);
}
