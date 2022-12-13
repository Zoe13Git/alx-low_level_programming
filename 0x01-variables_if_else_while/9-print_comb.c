#include <stdio.h>
/**
 * main - Entry point
 * Write a program that prints all possible 
 * combinations of single-digit numbers.
 * - Numbers must be separated by , followed by a space
 * - Numbers should be printed in ascending order
 * - You can only use the putchar function (every other
 * function (printf, puts, etc…) is forbidden)
 * - All your code should be in the main function
 * You can only use putchar four times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: always 0
 */

int main(void)
{
	int ch;

	for (ch = 48 ; ch <= 57 ; ch++)
	{
		putchar(ch);
		if (ch == 57)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
