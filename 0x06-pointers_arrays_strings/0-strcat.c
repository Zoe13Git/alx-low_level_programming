#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: Beginning string
 * @src: String to concate
 * Return: A character
 */
char *_strcat(char *dest, char *src)
{
	char *tmp;

	tmp = dest;
	while (*tmp != '\0')
		tmp++;

	while (*src != '\0')
		*tmp++ = *src++;

	*tmp = '\0';

	return (dest);
}
