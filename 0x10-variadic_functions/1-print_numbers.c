#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints number, followed by a new line
 * @seperator: separator
 * @n: number of integers passed to function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_star(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			if (separator)
				printf("%d%s", va_arg(ap, int), separator);
			else
				printf("%d", va_arg(ap, int));
		}
		else
			printf("%d", va_arg(ap, int));
	}
	printf("\n");

	va_end(ap);
}
