
#include "main.h"

/**
 * rev_string - reverses an array string
 * @s: string as an array
 * Return: reversed string
 */

void rev_string(char *s)
{
	char rev;
	int j;
	int i;

	rev = s[0];
	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i++)
	{
		j--;
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
	}
}
