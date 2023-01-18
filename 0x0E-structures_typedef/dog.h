#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines a new type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner of dog
 * Description: Defines metadata abou the struct dog type
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Additional Function Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif