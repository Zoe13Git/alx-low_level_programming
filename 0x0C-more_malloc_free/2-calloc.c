#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element to be allocated
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = nmemb * size;
	if (nmemb != 0 && x / nmemb != size)
		return (NULL);

	ptr = malloc(size * nmemb);

	return (ptr);
}
