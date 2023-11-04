#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len = 0, len2 = 0, i, j;
	char *nstr;

	while (s1[len])
		len++;
	while (s2[len2])
		len2++;
	nstr = malloc(sizeof(char) * (len + len2));
	if (!nstr)
		return (NULL);

	for (i = 0; i < len; i++)
		nstr[i] = s1[i];
	for (j = 0; j < len2; j++)
		nstr[i++] = s2[j];

	nstr[i] = '\0';

	return (nstr);
}
