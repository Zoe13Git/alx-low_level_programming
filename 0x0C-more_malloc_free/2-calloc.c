#include <stdlib.h>

/**
 * _memset - mem
 * @s: string
 * @b: character
 * @len: len of str
 * Return: void pointer
 */
char *_memset(char *s, char b, unsigned int len)
{
	char *ptr = s;

	while (len--)
		*ptr++ = b;

	return (ptr);
}

/**
 * _calloc - allocated memory for an array using malloc
 * @nmemb: no of arr elements
 * @size: size of each byte
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(size * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, size * nmemb);

	return (m);
}
