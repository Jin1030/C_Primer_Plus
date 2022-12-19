#include "get_filename.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* get_fname(char* f_name, int length)
{
    char* s;
    char* n_p;
    s = fgets(f_name, length, stdin);
    if (s)
    {
        n_p = strchr(s, '\n');
        if (!n_p)
        {
            while( getchar()!= '\n')
                continue;
        }
        else
            *n_p = '\0';
    }
    return n_p;
}