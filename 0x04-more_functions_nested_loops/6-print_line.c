#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of "-" to print
 * Return: Always 0 (success).
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
