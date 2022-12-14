#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success).
 */
int main(void)
{
	long int fib1 = 1;
	long int fib2 = 2;
	long int sum = 0;

	while (fib2 < 4000000)
	{
		long int temp = fib2;

		if (fib1 % 2 == 0)
			sum += fib1;
		else if (fib2 % 2 == 0)
			sum += fib2;
		fib1 = fib1 + fib2;
		fib2 = fib1 + temp;
	}

	printf("%ld\n", sum);

	return (0);
}
