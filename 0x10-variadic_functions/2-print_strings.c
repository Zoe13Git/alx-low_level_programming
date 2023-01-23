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

		if (i != n - 1)
			if (separator)
				if (str)
					printf("%s%s", str, separator);
				else
					printf("(nil)%s", separator);
			else
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
		else
			if (str)
				printf("%s", str);
			else
				printf("(nil)");
	}

	printf("\n");
	
	va_end(ap);
}

