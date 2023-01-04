#include <stdio.h>
#include <string.h>
/**
 * *_strpbrk - locate the first occurrence in the string
 * s of any of the bytes in the string accept
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
