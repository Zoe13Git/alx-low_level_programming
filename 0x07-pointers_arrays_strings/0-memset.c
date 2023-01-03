#include<stdio.h>

/**
 * *_memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: starting addess of memory to be filled
 * @b: value to be filled
 * @n: number of bytes to be set to the value
 * Return: Character.
 */

char _memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (b);
}
