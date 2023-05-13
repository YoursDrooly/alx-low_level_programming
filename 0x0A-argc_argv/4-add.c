#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: sum, if no input then 0, if invalid data type then Error & 1
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j = 0;

		while (arg[j] != '\0')
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum += atoi(arg);
	}

	printf("%d\n", sum);
	return (0);
}
