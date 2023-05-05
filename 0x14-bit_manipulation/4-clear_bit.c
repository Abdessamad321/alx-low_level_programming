#include "main.h"

/**
 * clear_bit - this function sets the value of a bit
 ** @n: number
 *** @index: index 
 **** Return: 1 (Success), -1 (Error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bb;
	unsigned long int z = 1;

	bb = (sizeof(unsigned long int) * 8);
	if (index > bb)
		return (-1);

	z = ~(z << index);
	*n = (*n & z);

	return (1);
}

