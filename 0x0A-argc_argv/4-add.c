#include <stdio.h>

/**
 * main - adds possitive numbers
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
	int i, j, num, sum = 0;
	char *s_num;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			s_num = argv[i];
			num = 0, j = 0;
			while (s_num[j] != '\0')
			{
				if (s_num[j] > '9' || s_num[j] < '0')
				{
					printf("Error\n");
					return (1);
				}
				num = num * 10 + s_num[j] - '0';
				j++;
			}
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
