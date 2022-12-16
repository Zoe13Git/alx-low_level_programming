#include "main.h"

/**
 * print_square - Prints a square
 * @size: Size of the square
 * Return: Always 0 (success).
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
