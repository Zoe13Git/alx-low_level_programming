#include <stdio.h>

/**
 * main - Entry point
 * Write a program that prints all possible combinations
 * of two two-digit numbers.
 * - The numbers should range from 0 to 99
 * - The two numbers should be separated by a space
 * - All numbers should be printed with two digits.
 *   1 should be printed as 01
 * - The combination of numbers must be separated by
 *   comma, followed by a space
 * - The combinations of numbers should be printed
 *   in ascending order
 * - 00 01 and 01 00 are considered as the same combination
 *   of the numbers 0 and 1
 * - You can only use the putchar function (every
 *   other function (printf, puts, etc…) is forbidden)
 * - You can only use putchar eight times maximum in your code
 * - You are not allowed to use any variable of type char
 * - All your code should be in the main functionn
 * Return: Always 0
 */

int main(void)
{
	int ch;
	int ch2;
	int ch3;
	int ch4;

	for (ch = 48; ch <= 57; ch++)
	{
		for (ch2 = 48; ch2 <= 57; ch2++)
		{
			for (ch3 = 48; ch3 <= 57; ch3++)
			{
				for (ch4 = 48; ch4 <= 57; ch4++)
				{ 
					if (ch == ch3 && ch2 == ch4)
						continue;
					if (ch > ch3)
						continue;
					else if (ch2 > ch4)
						continue;
					putchar(ch);
					putchar(ch2);
					putchar(' ');
					putchar(ch3);
					putchar(ch4);
					if (ch == 57 && ch2 == 56 && ch3 == 57 && ch4 == 57)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
