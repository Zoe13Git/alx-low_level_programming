#include "main.h"

/**
 * print_numbers - prints 1 to 9
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		_putchar(ch);
	_putchar('\n');
}
