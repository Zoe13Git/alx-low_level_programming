#include "main.h"
#include <stdlib.h>
/**
 * str_concat - prints a string that concates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1 = 0, len2 = 0, i = 0;

	if (!s1 || !s2)
	{
	}
	else
	{
		while (s1[i++])
			len1++;
		i = 0;
		while (s2[i++])
			len2++;
	}

	str = malloc(sizeof(char) * (len1 + len2) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		if (s1 == NULL)
			break;
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		if (s2 == NULL)
			break;
		str[len1 + i] = s2[i];
		i++;
	}
	return (str);
}
