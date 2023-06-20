#ifndef DOG_H
#define DOG_H


#include <stdio.h>
/**
 * struct dog - the name of the new type (data)
 * @name: the name of the dog of type char
 * @age: its age (of type float)
 * @owner: the name of the owner (also of type char)
 * Description: dog name age and name of owner
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * dog_t - typdef for the new dog (more like an alias)
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
