#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog value
 * @d: Pointer to struct dog
 * Return: 0 is success.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s", d->name);
		else
			printf("Name: (nil)");

		if (d->age)
			printf("Age: %f", d->age);
		else
			printf("Age: (nil)");

		if (d->owner)
			printf("Owner: %s", d->owner);
		else
			printf("Owner: (nil)");
	}

	printf("\n");
}
