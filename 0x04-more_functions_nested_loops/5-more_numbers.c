#include "main.h"
#include <unistd.h>

/**
 * more_numbers - prints 0 to 14, 10 times
 * Return: Always 0 (success);
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c, one = '1';

		for (c = '0'; c <= '9'; c++)
			_putchar(c);
		for (c = '0'; c <= '4'; c++)
		{
			(write(1, &one, 1));
			_putchar(c);
		}
		_putchar('\n');
	}
}
