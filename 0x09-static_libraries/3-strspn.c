#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* 3-strspn.c */

unsigned int _strspn(char *s, char *accept)
{
    return strspn(s, accept);
}
