#include <stddef.h>
/* defines size_t */

/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array.
 * @array: an array
 * @size: size of the array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* match data type */

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
