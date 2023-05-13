#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: arguments count
 * @argv: array vector
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
