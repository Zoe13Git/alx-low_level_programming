#include <stdio.h>
/**
 * _puts - Prints a string followed by a new line
 * @str: String
 * Return: Always (0);
 */
void _puts(char *str)
{
	int c = 0;

	while (*(str + c))
		putchar(*(str + c++));
	putchar('\n');
}
