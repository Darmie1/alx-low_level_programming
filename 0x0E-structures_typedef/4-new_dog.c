#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - this function creates a new dog
 * @name: dog's name
 * @age: the dog's age
 * @owner: parameter 3( the name of the owner)
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	{
		d->name = strdup(name);
		d->age = age;
		d->owner = strdup(owner);
	}
	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	return (d);
}
