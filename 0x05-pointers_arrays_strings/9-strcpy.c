#include "main.h"
#include <stdlib.h>
/**
 * _strcpy - copys src to desc
 * @dest: pointer for copy of string
 * @src: source str
 * Return: pointer to desc
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *ptr = dest;

	if (!dest)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (ptr);
}
