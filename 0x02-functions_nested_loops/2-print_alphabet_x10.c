/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;	

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
