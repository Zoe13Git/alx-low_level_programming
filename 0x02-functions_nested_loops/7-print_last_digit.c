#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: Number to find last digit
 * Return: Last digit of n.
 */
int print_last_digit(int n)
{
	int i = (n % 10 >= 0) ?  n % 10 : -1 * (n % 10);
	/* c converts number to char */
	char c = i + '0';

	_putchar(c);
	
	return (i);
}
