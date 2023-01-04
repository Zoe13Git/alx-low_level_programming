
/**
 * print_chessboard - print a board
 * @a: board
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c", (*a)[j]);
		printf("\n");
		a++;
	}
}
