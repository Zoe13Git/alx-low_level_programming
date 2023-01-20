#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - variadic function to sum all args
 * @n: first arg, an int
 * Return: sum of all integer arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);         /* Initialize the argument list. */

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);    /* Get the next argument value. */

	va_end(ap);                  /* Clean up. */

	return (sum);
}
