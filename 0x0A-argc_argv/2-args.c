#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments it receives.
 * @argc:: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int all = 0;

	while (all < argc)
		printf("%s\n", argv[all++]);

	return (0);
}
