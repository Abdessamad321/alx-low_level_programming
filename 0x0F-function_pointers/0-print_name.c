#include <stdlib.h>

/**
 * print_name - it's a function that prints a name.
 * @name: name parameter
 * @f: the function
 *
 */

void print_name(char *name, void (*f)(char *));
{

	if (name != NULL && f != NULL)
		f(name);
}
