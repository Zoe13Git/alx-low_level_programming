#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success).
 */
int main(void)
{
	long int fib1 = 1;
	long int fib2 = 2;
	int i = 0;

	for (i = 0; i < 25; i++)
	{
		long int temp = fib2;

		if (i == 24)
		{
			printf("%ld, %ld\n", fib1, fib2);
			continue;
		}
		printf("%ld, %ld, ", fib1, fib2);
		fib1 = fib1 + fib2;
		fib2 = fib1 + temp;
	}

	return (0);
}
