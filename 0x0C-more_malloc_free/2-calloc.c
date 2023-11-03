#include <stdlib.h>


/**
 * _memset - memset
 * @s: pointer to string
 * @c: integer
 * @len: length of string
 * Return: void
 */
void *_memset(void *s, int c, unsigned int len)
{
	unsigned char *p = s;

	while (len--)
		*p = (unsigned char)c;

	return (p);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element to be allocated
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (!ptr)
		return (NULL);

	_memset(ptr, 0, size * nmemb);

	return (ptr);
}
