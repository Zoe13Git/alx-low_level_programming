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

	if (name)
	{
		while (name[len++])
			;
		new->name = malloc(sizeof(new->name) * len);
		if (!new->name)
			return (NULL);
		for (i = 0; i < len; i++)
			new->name[i] = name[i];
	}

	new->age = age;

	if (owner)
	{
		while (owner[len2] != '\0')
			len2++;
		new->owner = malloc(sizeof(char) * len2 + 1);
		if (!new->owner)
			return (NULL);
		for (i = 0; i < len2; i++)
			new->owner[i] = owner[i];
		new->owner[i] = '\0';
	}

	return (new);
}
