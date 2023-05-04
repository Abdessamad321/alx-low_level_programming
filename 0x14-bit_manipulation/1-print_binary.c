#include "main.h"
#include <stdio.h>
/**
 * print_binary - this function prints the binary representation of a number.
 ** @n: unsigned int
 *** Return: binary
 */
void print_binary(unsigned long int n)
{

	unsigned long int x = n, y = 1;
	int z = 0;

	while (x > 0)
	{
		z++;
		x >>= 1;
	}
	z -= 1;

	if (z > 0)
		y = y << z;

	while (y > 0)
	{
		if (n & y)
			_putchar('1');
		else
			_putchar('0');

		y >>= 1;
	}
}
