#include "dog.h"
#include <stdlib.h>

/**
 * *_strcpy -  cpy
 * @dest: dest
 * @src: src
 * Description: "copy"
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
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
	dog_t *dogcpy;
	
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dogcpy = malloc(sizeof(dog_t));
	if (dogcpy == NULL)
		return (NULL);
	(*dogcpy).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dogcpy).name == NULL)
	{
		free(dogcpy);

		return (NULL);
	}
	(*dogcpy).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dogcpy).owner == NULL)
	{
		free((*dogcpy).name);
		free(dogcpy);
		return (NULL);
	}
	(*dogcpy).name = _strcpy(dogcpy->name, name);
	(*dogcpy).owner = _strcpy(dogcpy->owner, owner);
	(*dogcpy).age = age;
	return (dogcpy);
}
