#include "main.h"

/**
 * flip_bits - number of bits you need to flip to get from one
 * number to another
 * @n: first num
 * @m: second num
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int last_bit_n;
	int last_bit_m;

	while (n || m)
	{
		last_bit_n = n & 1;
		last_bit_m = m & 1;

		if (last_bit_n != last_bit_m)
			count++;

		n = n >> 1;
		m = m >> 1;
	}

	return (count);
}
