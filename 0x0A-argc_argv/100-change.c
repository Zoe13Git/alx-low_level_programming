#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min no of coins to make change for an amt of money
 * Description: coins value: 25, 10, 5, 2, 1 cent
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, count = 0, amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		while (amount >= coins[i])
		{
			amount -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);

	return (0);
}
