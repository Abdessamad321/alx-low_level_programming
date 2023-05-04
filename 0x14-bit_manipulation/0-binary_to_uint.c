#include "main.h"

/**
 * binary_to_uint - this function converts a binary number
 ** @b: binary
 *** Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int z;
	int x, base;

	if (!b)
		return (0);

	z = 0;

	for (x = 0; b[x] != '\0'; x++)
		;

	for (x--, base = 1; x >= 0; x--, base_ *= 2)
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}

		if (b[x] & 1)
		{
			z += base_;
		}
	}

	return (z);
}
