#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i, n, len = 0;

	for (len = 0; str[len] != '\0'; ++len)
		;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
