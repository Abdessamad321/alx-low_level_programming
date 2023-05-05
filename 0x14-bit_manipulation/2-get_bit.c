#include "main.h"
/**
 * get_bit - this function returns the value of a bit at a given index
 ** @n: our num
 *** @index: bit index
 **** Return: the bit: 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;
	unsigned int bb;

	bb = (sizeof(unsigned long int) * 8);
	if (index > bb)
		return (-1);

	b = ((n >> index) & 1);

	return (b);
}
