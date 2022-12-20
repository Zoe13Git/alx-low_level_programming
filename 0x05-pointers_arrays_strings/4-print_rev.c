#include <stdio.h>

/**
 * print_rev - returns length of string.
 * @s: String
 * Return: int length of string
 */
void print_rev(char *s)
{
	int count = 0;
	int len = 0;

	while (*(s + count) != 0)
	{
		len++;
		count++;
	}

	int i;

	for (i = len; i >= 0; i--)
		putchar(*(s + i));
	putchar('\n');

}
