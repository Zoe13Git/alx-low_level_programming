#include <stdio.h>

/**
 * main - entry
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
