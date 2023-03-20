#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an arr
 * @a: array
 * @n: number of elemenst to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
			{
				printf("%d\n", a[i]);
				continue;
			}
			printf("%d, ", a[i]);
		}
	}
}
