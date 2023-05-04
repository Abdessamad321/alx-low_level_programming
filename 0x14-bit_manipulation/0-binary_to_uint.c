#include "main.h"

/**
 * binary_to_uint - this function converts a binary number
 ** @b: binary num
 *** Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int z, base;

	if (!b)
		return (0);

	x = 0;

	for (z = 0; b[z] != '\0'; z++);

	for (z--, base = 1; z >= 0; z--, base *= 2)
	{
		if (b[z] != '0' && b[z] != '1')
		{
			return (0);
		}

		if (b[z] & 1)
		{
			x += base;
		}
	}

	return (x);
}
