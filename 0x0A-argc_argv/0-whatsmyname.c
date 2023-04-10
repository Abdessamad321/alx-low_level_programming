#include <stdio.h>
#includee "main.h"
/* This program prints its name, followed by a new line.
 * Success = 0 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
