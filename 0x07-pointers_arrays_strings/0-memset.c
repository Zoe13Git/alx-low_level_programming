#include<stdio.h>

/**
 * *_memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: starting addess of memory to be filled
 * @b: value to be filled
 * @n: number of bytes to be set to the value
 * Return: Character.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	unsigned char *p = s;

	i = 0;
	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}

	return (b);
}
