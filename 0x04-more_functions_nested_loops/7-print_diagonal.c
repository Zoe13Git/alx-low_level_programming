#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: numbers of times character \ is printed
 * Return: Always 0 (success).
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			int j;

			for (j = 1; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
