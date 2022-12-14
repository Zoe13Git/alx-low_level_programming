#include "main.h"

/**
 * jack_bauer - Prints every minte of the day 
 * from 00:00 to 23:59.
 * Return: Always 0 (success).
 */
void jack_bauer(void)
{
	int i;
	int j;
	int l;
	int m;
	char (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (l = 0; j <= 5; l++)
			{
				for (m = 0; m <= 9; m++)
				{

					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + l);
					_putchar('0' + m);
					_putchar('\n');
				}
			}
		}
	}
}
