#include "main.h"

/**
 * set_bit - this function sets the value of a bit to 1 at a given index.
 ** @n: num
 *** @index: the index
 **** Return: 1 (Success), -1 (Error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bb;
	unsigned long int z = 1;

	bb = (sizeof(unsigned long int) * 8);
	if (index > bb)
		return (-1);

	z <<= index;
	*n = (*n | z);

	return (1);
}
