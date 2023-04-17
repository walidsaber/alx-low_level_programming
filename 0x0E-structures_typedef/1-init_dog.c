#include "dog.h"

/**
 * init_dog - struct var
 * @d: dog
 * @name: name of the dog
 * @age: his age
 * @owner: his owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
