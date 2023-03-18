#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	char lower, e, q;

	e = 'e';
	q = 'q';
	for (lower = 'a'; lower <= 'z'; lower++)
	{
	if (lower != e && lower != q)
	putchar(lower);
	}
	putchar('\n');
	return (0);

}

