#include "main.h"

/**
 * print_sign - prints the sign of an integer
 * @n integer to check
 * Return: 1 if n is greater than zero
 * 0 if n is zero and -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0) 
		_putchar('+');
		return (1);
	else if (n == 0)
		_putchar(' ');
		return (0);
	else 
		_putchar('-');
		return (-1);
}
