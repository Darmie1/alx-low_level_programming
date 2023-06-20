#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A finction that initializes a variable type
 * @name: this oarameter denotes the name of the dog
 * @age: the dog's age
 * @owner: dog's owner
 * @d: struct object
 * Description: long description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->owner = owner;
	d->age = age;
}
