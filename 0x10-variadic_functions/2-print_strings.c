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

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		char *s = va_arg(ap, char*);

		if (i != n - 1)
			if (separator)
				if (s)
					printf("%s%s", s, separator);
				else
					printf("(nil)%s", separator);
			else
				if (s)
					printf("%s", s);
				else
					printf("(nil)");
		else
			if (s)
				printf("%s\n", s);
			else
				printf("(nil)\n");
	}
}

