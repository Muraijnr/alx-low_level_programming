#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees dog
 * @dog: supposed to be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
