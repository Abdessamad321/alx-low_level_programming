#include <unistd.h>

/* c to the stdout 
 * */
int _putchar(char c)
{
	return (write(1,&c,1));
}
