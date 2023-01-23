#include <stdarg.h>
#include <stdio.h>


/**
 * print_all - prints all args in a variadic function
 * @format: c: char, i: integer, f: float, s: char *
 * any other char should be ignored
 * Return: 0 success
 */
void print_all(const char *format, ...)
{
	va_list ap;
	int i;

	if (!format)
		return;

	va_start(ap, format);

	i = 0;

	while (format[i])
	{
		switch (format[i++])
		{
		case 'c':
			printf("%c ", va_arg(ap, int));
			break;
		case 'i':
			printf("%d ", va_arg(ap, int));
			break;
		case 'f':
			printf("%f ", va_arg(ap, double));
			break;
		case 's':
			{
				char *str = va_arg(ap, char*);

				if (str)
					printf("%s", str);
				else
					printf("(nil)");
				break;
			}
		default:
			continue;

		}
	}
	printf("\n");
}
