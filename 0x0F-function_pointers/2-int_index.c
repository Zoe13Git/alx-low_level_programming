#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: a pointer to array
 * @size: number of elements in array
 * @cmp: function pointer
 * Return: index of first element to which cmp function
 * does not return 0.
 * If no elemnt matches, return -1.
 * If size <=0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
		else if (i == size - 1)
			return (-1);
	}

	return (-1);
}
