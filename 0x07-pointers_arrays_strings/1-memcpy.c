#include <stdio.h>

/**
 * *_memcpy - coies n bytes from memory area src to memory
 * area dsc.
 * @dest: where to copy the memory to
 * @src: the memory area to copy from
 * @n: the number of bytes
 * Return: Pointer of type pointer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
