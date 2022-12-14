#include "main.h"

/**
 * times_table - prints 9 times table
 * starts from 0.
 * Return: Always 0 (success).
 */
void times_table(void)
{
	int i;
	int j;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar('0' + i * j);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
