#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to int
 * @index: index of bit;
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = ((1 << index) | *n);
	return (1);
}

