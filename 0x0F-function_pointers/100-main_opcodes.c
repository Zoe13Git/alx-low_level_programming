#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - program that prints the opcodes of its own main funciton.
 * @a: address of the main function
 * @n: number of bytes to print
 * Return: void;
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - entry point
 * @argc: integer
 * @argv: character
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(1);
	}
	print_opcodes((char *)&main, num);

	return (0);
}
