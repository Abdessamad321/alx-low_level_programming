#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* 0-memset */

char *_memset(char *y, char e, unsigned int s)
{
    return memset(y, e, s);
}
