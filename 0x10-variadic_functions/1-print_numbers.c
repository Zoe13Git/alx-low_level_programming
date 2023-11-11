#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints number, followed by a new line
 * @separator: separator
 * @n: number of integers passed to function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
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
