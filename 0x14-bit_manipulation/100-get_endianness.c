#include "main.h"

/**
 * get_endianness - this function checks the endiannes
 ** Return:0 (big endian),1 (little endian)
 */

int get_endianness(void)
{

	int a = 0x00000001;
	char *e = (char *)&n;

	return (e[0]);
}
