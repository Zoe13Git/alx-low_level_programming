#include <stdio.h>

/**
 * _atoi - converts a string int to int
 * @s: string int
 * Return: int of string int
 */
int _atoi(char *s)
{
	int res = 0, sign = 1, i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i = 1;
	}
	while (s[i] != '\0')
	{
		if (s[i] > '9' || s[i] < '0')
			return (-1);
		res = res * 10 + s[i] - '0';
		i++;
	}

	return (res * sign);
}
/**
 * main - multiply 2 numbers
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Erorr\n");
		return (1);
	}
	else
	{
		printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	}
	return (0);
}
