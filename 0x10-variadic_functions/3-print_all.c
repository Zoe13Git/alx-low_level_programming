#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all args in a variadic function
 * @format: c: char, i: integer, f: float, s: char*
 * any other char should be ignored
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, check;
	char *str;

	va_start(ap, format);
	while (format && format[i])
	{
		check = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			check = 1;
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			check = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			check = 1;
			break;
		case 's':
			str = va_arg(ap, char*);
			check = 1;
			if (str)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		}
		if (check == 1 && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
