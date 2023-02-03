#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number or
 * 0 if any char is not 1 or 0 and if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len = 0, dec = 0, int_b;

	if (!b)
		return (0);

	while (b[i++])
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		int_b = b[i] - '0';
		/*
		 * If you need to raise 2 to a power.
		 * The fastest way to do so is to bit shift by the power.
		 * 2 pow 3 => 1 << 3 == 8
		 * 2 pow 7 => 1 << 7 == 128
		 */
		dec += int_b * (1 << (len - i - 1));
	}
	return (dec);
}
