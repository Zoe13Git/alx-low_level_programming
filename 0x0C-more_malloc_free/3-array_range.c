#include <stdlib.h>

/**
 * array_range - creates an array of ints start from min to max
 * @min: start point num
 * @max: end point num
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int size;
	int *arr, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
