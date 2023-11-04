#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in mem
 * which contains a copy of the string given as paramater
 * @str: string
 * Return: string
 */
char *_strdup(char *str)
{
	int n = 0, i;
	char *nstr;

	if (!str)
		return (NULL);

	while (str[n++])
		;

	nstr = malloc(sizeof(char) * n);
	if (!nstr)
		return (NULL);

	for (i = 0; i < n; i++)
		nstr[i] = str[i];

	return (nstr);
}
