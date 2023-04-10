#include <unistd.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}
