#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string
 *
 * Return: length of string i
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
