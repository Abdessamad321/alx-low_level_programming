#include <stdio.h>
/**
 * main - Entry point Prints the alphabet lowercase using ascii backwards
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chr;
	for (chr = 'z'; chr >= 'a'; chr--)
	{
	putchar(chr);
	}
	putchar('\n');
	return (0);
}
