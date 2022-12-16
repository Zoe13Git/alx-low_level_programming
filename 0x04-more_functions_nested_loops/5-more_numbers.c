#include "main.h"

/**
 * more_numbers - prints 0 to 14, 10 times
 * Return: Always 0 (success);
 */
void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (char c = '0'; c <= '9'; c++)
			_putchar(c);
		for (char c = '0'; c <= '4'; c++)
		{
			_putchar('1');
			_putchar(c);
		}
		_putchar('\n');
	}
}
