#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 * Return: dog created;
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_d;
	dog_t *d = &new_d;

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
