#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i, c = 0, len = 0;
	char tmp;

	while (*(s + c++))
		len++;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
