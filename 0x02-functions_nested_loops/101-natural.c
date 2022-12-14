#include <stdio.h>

/**
 * main - Entry point
 * Prints the sum of all the multiples of 3 and 5
 * below 1024(excluded)
 * Return: Always 0 (success).
 */
int main(void)
{
	int sum_3_n_5 = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum_3_n_5 += i;
	}
	printf("%d\n", sum_3_n_5);
}
