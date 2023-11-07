#include <stdio.h>

/**
 * main - entry
 * Return: void
 */
int main(void)
{
	long n = 612852475143;
	long i = 2;

	while (i * i <= n)
	{
		if (n % i == 0)
		{
			n /= i;
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", n);

	return (0);
}
