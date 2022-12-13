#include <stdio.h>
/**
 * main - Entry point
 * Question: Write a program that prints all the numbers of 
 * base 16 in lowercase, followed by a new line.
 * - You can only use the putchar function (every 
 * other function (printf, puts, etc…) is forbidden)
 * - All your code should be in the main function
 * - You can only use putchar three times in your code
 * Return: always 0
 */

int main(void)
{
	int ch;

	for (ch = 48 ; ch <= 57 ; ch++)
	{
		putchar(ch);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
