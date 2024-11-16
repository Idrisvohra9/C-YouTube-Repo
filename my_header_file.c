#include <stdio.h>
#include <ctype.h>
#include "my_header_file.h"

char *toUpperCase(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; ++i)
        str[i] = toupper(str[i]);
    return str;
}