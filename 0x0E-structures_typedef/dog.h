#ifndef dog_h
#define dog_h
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - define structure or new type named dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/** typedef for struct dog new name */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
