#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
	int num1;
	long int num2;
	long long int num3;
	float num4;
	char letter;

	printf("Size of a char: %ld byte(s)\n", sizeof(letter));
	printf("Size of an int: %ld byte(s)\n", sizeof(num1));
	printf("Size of a long int: %ld byte(s)\n", sizeof(num2));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(num3));
	printf("Size of a float: %ld byte(s)\n", sizeof(num4));

	return (0);
}

