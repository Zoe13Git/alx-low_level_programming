#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints nubers from a variadic function
 * @separator: string to be printed between numbers
 * @n: numbe of integers passed to the funciton
 * Return: 0 if success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			if (separator)
				printf("%d%s", va_arg(ap, int), separator);
			else
				printf("%d", va_arg(ap, int));
		else
			printf("%d\n", va_arg(ap, int));
	}

	va_end(ap);
}

