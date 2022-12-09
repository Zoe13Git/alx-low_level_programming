#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
	int num1;
	float num2;
	double num3;
	char letter;

	printf("Size of int: %ld bytes\n", sizeof(num1));
	printf("Size of float: %ld bytes\n", sizeof(num2));
	printf("Size of double: %ld bytes\n", sizeof(num3));
	printf("Size of char: %ld byte\n", sizeof(letter));
	return (0);
}

