#include <stdio.h>

/**
 * main - Entry point
 * Write a program that prints all possible different
 * combinations of three digits.
 * - Numbers must be separated by , followed by a space
 * - The three digits must be different
 * - 012, 120, 102, 021, 201, 210 are considered the 
 *   same combination of the three digits 0, 1 and 2
 * - Print only the smallest combination of two digits
 * - Numbers should be printed in ascending order, with
 *   two digits
 * - You can only use the putchar function
 *   (every other function (printf, puts, etc…) is forbidden)
 * - You can only use putchar six times maximum in your code
 * - You are not allowed to use any variable of type char
 * - All your code should be in the main function
 * Return: Always 0
 */

int main(void)
{
	int ch;
	int ch2;
	int ch3;

	for (ch = 48; ch <= 57; ch++)
	{
		for (ch2 = 48; ch2 <= 57; ch2++)
		{
			for (ch3 = 48; ch3 <= 57; ch3++)
			{
				if (ch == ch2 || ch2 == ch3)
					continue;
				if (ch3 < ch2 || ch2 < ch)
					continue;
				putchar(ch);
				putchar(ch2);
				putchar(ch3);
				if (ch == 55 && ch2 == 56 && ch3 == 57)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
