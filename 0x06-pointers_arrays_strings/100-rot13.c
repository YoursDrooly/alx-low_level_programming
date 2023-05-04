#include "main.h"

/**
 * rot13 - rotates a string by 13 places
 * @s: string to be rotated
 * Return: rotated string
 */

char *rot13(char *s)
{
	int i;
	int j;

	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == str[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
