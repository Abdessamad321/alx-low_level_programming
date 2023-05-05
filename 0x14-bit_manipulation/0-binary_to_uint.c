#include "main.h"

/**
 * binary_to_uint - this function converts a binary number
 ** @b: binary num
 *** Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int z;

	z = 0;
	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		z <<= 1;
		if (b[x] == '1')
			z += 1;
	}
	return (z);
}
