#include "main.h"

/**
 * print_number - prints an integer
 * @n: Integer entered
 * Return: Always 0 (success).
 */
void print_number(int n)
{
	unsigned int n1 = 0;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar('0' + n1 % 10);
}
