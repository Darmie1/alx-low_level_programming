#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - This function frees dogs
 * @d: this parameter represents the struct dog to free
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
