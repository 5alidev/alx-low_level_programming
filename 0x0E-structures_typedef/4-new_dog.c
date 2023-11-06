#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(struct dog));
	if (doggy == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(name);
		free(doggy);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(owner);
		free(doggy);
		return (NULL);
	}
	doggy->name = name;
	doggy->owner = owner;
	doggy->age = age;
	return (doggy);
}
