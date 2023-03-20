#include "main.h"

/**
 * _atoi - implement atoi
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int num = 0, i, sign = 1;
	int chk = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (chk == 0)
			{
				chk = 1;
				if (i != 0)
				{
					if (s[i - 1] == '-')
						sign = -1;
				}
			}

			num = num * 10 + (s[i] - '0');

			if (s[i + 1] != '\0')
			{
				if (s[i + 1] < 48 || s[i + 1] > 57)
					break;
			}
		}
	}
	num *= sign;
	return (num);
}
