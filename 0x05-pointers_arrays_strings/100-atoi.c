#include "main.h"

/**
 * _atoi - implement atoi
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int i, sign = 1;
	unsigned int num = 0;
	signed int num0 = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= 48 && s[i] <= 57)
		{
			num = num * 10 + (s[i] - '0');

			if (s[i + 1] != '\0')
			{
				if (s[i + 1] < 48 || s[i + 1] > 57)
					break;
			}
		}
	}

	if (sign == -1)
	{
		num0 = num * -1;
		return (num0);
	}

	return (num);
}
