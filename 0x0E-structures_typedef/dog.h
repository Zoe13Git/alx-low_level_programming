#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines a new type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner of dog
 * Description: Defines metadata abou the struct dog type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Additional Function Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
