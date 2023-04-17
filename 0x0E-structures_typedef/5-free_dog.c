#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog
 * @d: name 
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if ((d->name) == NULL)
		free(d);
	if ((d->owner) == NULL)
	{
		free(d->name);
		free(d);
	} else
		free(d);
}
