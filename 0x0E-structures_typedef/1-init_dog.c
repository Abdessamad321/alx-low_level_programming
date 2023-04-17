#include <stddef.h>
#include "dog.h"

/**
 * init_dog - this function initialize a variable of type struct dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

