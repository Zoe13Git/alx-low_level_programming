#include "main.h"

/**
 * _isalpha - Checks if its alpha char
 * @c: The character checked
 * Return: 1 in case of success
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
