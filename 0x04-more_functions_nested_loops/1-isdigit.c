#include "main.h"

/**
 * _isdigit - Checks is character is a digit
 * @c: Character checked
 * Return: 1 ig digit else 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
