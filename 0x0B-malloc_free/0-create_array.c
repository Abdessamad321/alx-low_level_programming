#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	/* size input */
	if (size <= 0)
		return (NULL);
	arr = malloc(sizeof(char) * size); /* allocate memory */

	/* memory validation */
	if (arr == NULL)
		return (NULL);

	/* set array values to char c */
	while (i < (int)size)
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';

	return (arr);
}
