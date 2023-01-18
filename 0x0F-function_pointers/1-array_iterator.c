#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given a parameter on
 * each element of an array
 * @array: pointer to array
 * @size: size of array
 * @action: function pointer
 * Return: 0 for sucess.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
