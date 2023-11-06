#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - Function that frees dogs.
 *
 * @d: dog to free
 *
 * Return: Nothing (void)
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
