#include "main.h"
#include <stdio.h>

/* This program prints its name, followed by a new line.*/

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[argc - 1]);
	return (0);
}
