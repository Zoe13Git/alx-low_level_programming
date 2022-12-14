#include "main.h"
/**
 * print_times_table - prints times table n starting from 0
 * @n: Number to print time table
 * Return: Always 0 (success).
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					_putchar('0');
				}
				else if (i * j < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (i * j));
				}
				else if (i * j < 100)
				{
					_putchar(' ');
					_putchar('0' + (i * j) / 10);
					_putchar('0' + (i * j) % 10);
				}
				else
				{
					_putchar('0' + (i * j) / 100);
					_putchar('0' + (i * j) / 10 % 10);
					_putchar('0' + (i * j) % 10);
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
