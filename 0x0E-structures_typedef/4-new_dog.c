#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - length
 * @s: char
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * new_dog - copy struct
 * @name: name of old struct
 * @age: age
 * @owner: owner
 * Return: struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int size, i;
	char *n, *o;
	dog_t *dogcpy;

	dogcpy = malloc(sizeof(dog_t));
	if (dogcpy == NULL)
		return (NULL);
	size = _strlen(name);
	dogcpy->name = malloc(sizeof(char) * size);
	n = malloc(sizeof(char) * size + 1);
	if (dogcpy->name == NULL)
	{
		free(dogcpy->name);
		return (NULL);
	}
	dogcpy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	o = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogcpy->owner == NULL)
	{
		free(dogcpy->owner);
		free(dogcpy);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		n[i] = name[i];
	}
	n[size] = '\0';
	for (i = 0; i < size; i++)
	{
		o[i] = owner[i];
	}
	o[size] = '\0';
	dogcpy->name = n;
	dogcpy->age = age;
	dogcpy->owner = o;
	return (dogcpy);
}
