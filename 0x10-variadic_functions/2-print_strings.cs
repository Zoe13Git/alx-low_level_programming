#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints nubers from a variadic function
 * @separator: string to be printed between numbers
 * @n: numbe of integers passed to the funciton
 * Return: 0 if success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}

