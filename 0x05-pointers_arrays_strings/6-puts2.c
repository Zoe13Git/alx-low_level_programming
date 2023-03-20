#include "main.h"
/**
 * puts2 - skips 1 char
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int c = 0;

	while (*str != 0)
	{
		if (c++ % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
