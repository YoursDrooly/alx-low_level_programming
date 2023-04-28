#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c
 * @c: character to write
 * Return: written characters
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
