#include <stdio.h>

/**
 * main - Fizz-Buzz test
 * Numbers from 1 to 100, Fizz if multiples of 3
 * Buzz if multiples of five and FizzBuzz if multiples
 * of 3 and 5.
 * Return: Always 0 (success).
 */
int main(void)
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
