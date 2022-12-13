#include "main.h"

void print_alphabet(void);

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
