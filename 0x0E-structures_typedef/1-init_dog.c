#include "dog.h"

/**
 * init_dog - init struct dog
 * @d: instance of struct dog
 * @name: dog name to init with
 * @age: dog age to init with
 * @owner: dog owner to init with
 * Return: Always 0 (success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
