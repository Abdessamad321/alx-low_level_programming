#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - for the sum of two numbers(a,b).
 * @a: first number.
 * @b: second number.
 *
 * Return: (a,b) sum.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - for the difference of two numbers(a,b).
 * @a: first number.
 * @b: second number.
 *
 * Return: (a,b) difference.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - for the product of two numbers(a,b).
 * @a: first number.
 * @b: second number.
 *
 * Return: (a,b) product.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - for the division of two numbers(a,b).
 * @a: first number.
 * @b: second number.
 *
 * Return: (a,b) quotient.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - for the remainder of the division of two numbers(a,b).
 * @a: first number.
 * @b: second number.
 *
 * Return: (a,b) remainder of the division.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
