#include <stdlib.h>
/**
 * create_array - creates an arr of chars and initializes a specific char
 * @size: int
 * @c: fillin character
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(c) * size);
	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
