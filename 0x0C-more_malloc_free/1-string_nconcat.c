#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concantenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str, *empt;
	unsigned int len, i = 0, j = 0;
	unsigned int size;

	len = 0;
	empt = "";
	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;

	while (s1[len++])
		;

	size = (len + n) * sizeof(*str);

	str = malloc(size + 1);

	if (str == NULL)
		return (NULL);

	while (i < size && s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	while (i < size && s2[j] != '\0')
	{
		str[i++] = s2[j++];
	}
	str[i] = '\0';

	return (str);
}
