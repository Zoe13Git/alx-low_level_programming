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
	int i, len = 0, len2 = 0;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);

	while (name[len] != '\0')
		len++;
	new->name = malloc(sizeof(char) * len + 1);
	for (i = 0; i < len; i++)
		new->name[i] = name[i];
	new->name[i] = '\0';

	new->age = age;

	while (owner[len2] != '\0')
		len2++;
	new->owner = malloc(sizeof(char) * len2 + 1);
	for (i = 0; i < len2; i++)
		new->owner[i] = owner[i];
	new->owner[i] = owner[i];

	return (new);
}
