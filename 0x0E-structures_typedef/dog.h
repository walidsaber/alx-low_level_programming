#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - dog struct
 * @name: name of dog
 * @age: his age
 * @owner: his owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
