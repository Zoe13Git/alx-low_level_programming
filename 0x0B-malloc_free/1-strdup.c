#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a duplicate of str
 * @str: pointer to str
 * Return: Pointer to copy of str
 */
char *_strdup(char *str)
{
	char *new_str;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i++])
		len++;
	new_str = malloc(sizeof(char) * len + 1);

	if (new_str == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
