#include <stdio.h>
#include <string.h>
/**
 * _strspn - Returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 * @s: Pointer. null-terminated string to be scanned
 * @accept: Pointer. null-terminated string containing
 * the characters to match.
 * Return: returns the length of the segment.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
		return (len);
	while (*s && strchr(accept, *s++))
		len++;

	return (len);
}
