#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 * Description: Keeping the values of name and owner to themselves
 * Return: dog created;
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, own_len, i;
	dog_t *d = malloc(sizeof(dog_t));

	name_len = own_len = 0;

	/* transversing the memory their lenth */
	while(name[name_len++]);
	while(owner[own_len++]);

	if (d == NULL)
		return (NULL);

	d->name = malloc(name_len * sizeof(d->name));
	if (!d)
		return (NULL);
	for (i = 0; i < name_len; i++)
		d->name[i] = name[i];

	d->age = age;

	d->owner = malloc(own_len * sizeof(d->owner));
	if (d == NULL)
		return (NULL);
	for (i = 0; i < own_len; i++)
		d->owner[i] = owner[i];

	return (d);
}
