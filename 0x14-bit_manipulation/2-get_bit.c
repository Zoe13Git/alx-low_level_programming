#include "main.h"

/**
 * get_bit - returns the value of a bit in a given index
 * @n: number
 * @index: index to check
 * Return: Value of bit at given index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
