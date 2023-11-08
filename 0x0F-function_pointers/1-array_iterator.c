#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - func that executes a
 * func given as a parameter on each element of an array
 * @array: an array of integers
 * @size: size of array
 * @action: pointer to the function to be used
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
