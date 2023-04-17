#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, ol, i;
	dog_t *dogg;

	if (name == NULL || owner == NULL)
		return (NULL);
	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);
	for (nl = 0; name[nl]; nl++)
		;
	nl++;
	dogg->name = malloc(nl * sizeof(char));
	if (dogg->name == NULL)
	{
		free(dogg);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
		dogg->name[i] = name[i];
	dogg->age = age;
	for (ol = 0; owner[ol]; ol++)
		;
	ol++;
	dogg->owner = malloc(ol * sizeof(char));
	if (dogg->owner == NULL)
	{
		free(dogg->name);
		free(dogg);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		dogg->owner[i] = owner[i];
	return (dogg);
}
