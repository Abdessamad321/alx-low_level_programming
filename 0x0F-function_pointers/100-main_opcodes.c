#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the opcodes of its own main function.
 * @argc: The number of arguments.
 * @argv: An array.
 *
 * Return: 0 (Success).
 */

int main(int argc, char *argv[])
{
	int hi, by;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	by = atoi(argv[1]);

	if (by < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (hi = 0; hi < by; hi++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (hi == by - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
