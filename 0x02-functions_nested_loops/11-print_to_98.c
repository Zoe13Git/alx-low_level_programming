#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints natural numbers from n to 98
 * @n: Start point
 * Return: Always 0 (success).
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		int i = 0;

		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
				continue;
			printf(", ");
		}
	}
	else
	{
		int i = 0;

		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
				continue;
			printf(", ");
		}
	}
	printf("\n");
}

