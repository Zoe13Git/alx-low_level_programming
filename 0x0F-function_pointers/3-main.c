#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - entry
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0 on success;
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error 98\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	if (num2 == 0 && (strcmp(op, "/") == 0 || strcmp(op, "%") == 0))
	{
		printf("Error 100\n");
		exit(100);
	}

	op_func = get_op_func(op);
	if (op_func)
	{
		printf("%d\n", op_func(num1, num2));
	}
	else
	{
		printf("Error 99\n");
		exit(99);
	}

	return (0);
}

