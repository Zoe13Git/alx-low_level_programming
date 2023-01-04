#include <stdio.h>
#include <string.h>
/**
 * *_strstr - finds the first occurrence of the substring
 * needle in the string haystack. The terminating null bytes
 * (\0) are not compared
 * @haystack: main string
 * @needle: substring to be searched in haystack
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (strncmp(haystack, needle, strlen(needle)) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
