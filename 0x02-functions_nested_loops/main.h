/**
 * Write a program that prints _putchar, followed by a new line.
 * The program should return 0
 */

void print_alphabet(void);

puts("_putchar");

void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
