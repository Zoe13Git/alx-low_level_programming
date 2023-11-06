#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: string
 * @age: float
 * @owner: string
 * Return: new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
