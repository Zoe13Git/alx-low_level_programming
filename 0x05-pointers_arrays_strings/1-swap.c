/**
 * swap_int - Swaps the values of two integers
 * @a: first integer
 * @b: Second Integer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
