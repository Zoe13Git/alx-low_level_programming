#include <stdio.h>

/**
 * main - Entry point
 * Write a program that prints all possible different
 * combinations of two digits.
 * - Numbers must be separated by ,, followed by a space
 * - The two digits must be different
 * - 01 and 10 are considered the same combination of
 *   the two digits 0 and 1
 * - Print only the smallest combination of two digits
 * - Numbers should be printed in ascending order, with
 *   two digits
 * - You can only use the putchar function
 *   (every other function (printf, puts, etc…) is forbidden)
 * - You can only use putchar five times maximum in your code
 * - You are not allowed to use any variable of type char
 * - All your code should be in the main function
 * Return: Always 0
 */

int main(void)
{
	int ch;
	int ch2;

	for (ch = 48; ch <= 57; ch++)
	{
		for (ch2 = 48; ch2 <= 57; ch2++)
		{
			if (ch == ch2 || ch2 < ch)
				continue;
			putchar(ch);
			putchar(ch2);
			if (ch == 56 && ch2 == 57)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
