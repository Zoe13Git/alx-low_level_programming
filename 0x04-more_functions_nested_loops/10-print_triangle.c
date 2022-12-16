#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of triangle
 * Return: Always 0 (success).
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
				_putchar(' ');
			for (j = 0; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
