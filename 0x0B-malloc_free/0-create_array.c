#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initialize it with specific char
 * @size: size of array
 * @c: character
 * Return: A pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (!arr)
		return (NULL);

	while (i < size)
		arr[i++] = c;

	return (arr);
}
