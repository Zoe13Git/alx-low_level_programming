#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: count of arguments
 * @argv: array of pointers to strings which are the args
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op; /* (operator: +, -, *, /, %) */
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (strcmp(op, "+") != 0 && strcmp(op, "-") != 0 &&
		strcmp(op, "*") != 0 && strcmp(op, "/") != 0 &&
		strcmp(op, "%") != 0)
	{
		printf("Error\n");
		return (99);
	}
	else if ((strcmp(op, "/") && num2 == 0) ||
		(strcmp(op, "%") && num2 == 0))
	{
		printf("Error\n");
		return (100);
	}
	else
	{
		f = get_op_func(op);
		printf("%d\n", f(num1, num2));
	}

	return (0);
}
