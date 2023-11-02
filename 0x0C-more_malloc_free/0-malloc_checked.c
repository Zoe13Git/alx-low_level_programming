#include <stdlib.h>
/**
 * malloc_checked
 * @b: integer
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
