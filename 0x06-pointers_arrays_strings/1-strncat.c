#include "main.h"

/**
 * *_strncat - concatenates two strings up to n
 * @dest: Beginning string
 * @src: String to concate
 * @n: number of bytes to copy from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *tmp;
	int i = 0;

	tmp = dest;
	while (*tmp != '\0')
		tmp++;

	while (*src != '\0' && i++ != n)
		*tmp++ = *src++;

	*tmp = '\0';

	return (dest);
}
