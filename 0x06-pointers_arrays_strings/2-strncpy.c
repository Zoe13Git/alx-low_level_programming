#include "main.h"

/**
 * _strncpy - copies a str to n
 * @dest: initial string
 * @src: string to copy
 * @n: number of bytes to copy
 * Return: pointer to new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
