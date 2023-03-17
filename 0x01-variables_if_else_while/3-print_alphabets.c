#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)

{
	char a;
	
	for (a = 'a'; a <= 'z'; a++)
	putchar(a);
        
	for (a = 'A'; a <= 'Z'; a++)
	putchar(a);
	putchar('\n');

	return (0);
}
