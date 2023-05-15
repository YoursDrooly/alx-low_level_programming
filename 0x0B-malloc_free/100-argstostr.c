#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to new string, or NULL for failure
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		total_len += len + 1;
	}

	concat = malloc(sizeof(char) * total_len + 1);
	if (concat == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[len] = av[i][j];
			len++;
		}
		concat[len] = '\n';
		len++;
	}

	concat[len] = '\0';

	return (concat);
}
