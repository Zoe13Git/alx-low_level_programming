#include <stdio.h>

/**
 * *_strchr - Returns a pointer to the first occurence of the
 * character c in the string s, or null if the character is not found
 * @s: pointer
 * @c: character
 * Return: Pointer of type char
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);

	return (NULL);
}
