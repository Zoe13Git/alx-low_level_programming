#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: Beginning string
 * @src: String to concate
 * Return: A character
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;

	while (*src != '\0')
		*dest++ = *src++;

	*dest = '\0';

	return (dest);
}
