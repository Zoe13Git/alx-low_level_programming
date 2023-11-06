#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog entity
 * @name: string, name of dog
 * @age: float, age of dog
 * @owner: string, owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
