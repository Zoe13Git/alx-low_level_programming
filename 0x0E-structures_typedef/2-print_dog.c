#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog value
 * @d: Pointer to struct dog
 * Return: 0 is success.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: (nil)\n");
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
