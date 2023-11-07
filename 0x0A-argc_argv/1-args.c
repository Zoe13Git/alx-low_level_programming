#include <stdio.h>

/**
 * main - entry
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
	if (!argv)
		return (-1);
	printf("%d\n", argc);
	return (0);
}
