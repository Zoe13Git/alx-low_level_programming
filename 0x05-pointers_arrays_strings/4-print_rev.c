#include "main.h"

/**
 * print_rev - returns length of string.
 * @s: String
 * Return: int length of string
 */
void print_rev(char *s)
{
	int i, len = 0, c = 0;

	while (*(s + c++))
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
