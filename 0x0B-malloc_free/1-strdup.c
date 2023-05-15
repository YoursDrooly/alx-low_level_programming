#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns pointer to new string which is duplicate of str
 * @str: string to duplicate
 * Return: pointer to new string,
 * NULL if str=NULL or insufficient memory available
 */

char *_strdup(char *str)
{
	char *duplicate;
	size_t length = 0;
	size_t i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
