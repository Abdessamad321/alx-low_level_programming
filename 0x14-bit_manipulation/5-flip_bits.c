#include "main.h"

/**
 * flip_bits - this function returns the number of bits you would need to flip
 ** @n: num1
 *** @m: num2
 **** Return: bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit = 0;
	unsigned long int dif;

	dif = n ^ m;

	do {
		bit += (dif & 1);
		dif >>= 1;
	} while
		(dif > 0);

	return (bit);
}
