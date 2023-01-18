#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the pointer
 * @d: instance of dog_t
 * Return: O if success.
 */
void free_dog(dog_t *d)
{
	free(d);
}
