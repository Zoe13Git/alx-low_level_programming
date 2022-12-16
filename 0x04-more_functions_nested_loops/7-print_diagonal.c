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
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
