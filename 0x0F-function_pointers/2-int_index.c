#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer that receives one int input and returns and int
 * Return: index of first element for which cmp corresponds to
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp)
		return (0);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
