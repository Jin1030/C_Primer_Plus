#include <stdio.h>
#include <stdlib.h>
#include "get_filename.h"
#define LEN 100
#define LEN_T 1000
//#include <string.h>


int main()
{
    char f1_name[LEN];
    char f2_name[LEN];
    FILE* f1;
    FILE* f2;    

    // open the first files
    puts("please type the first file");
    get_fname(f1_name, LEN);
    if ((f1 = fopen(f1_name, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", f1_name);
        exit(EXIT_FAILURE);
    }

    // open the second files
    puts("please type the second file");
    get_fname(f2_name, LEN);
    if ((f2 = fopen(f2_name, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", f2_name);
        exit(EXIT_FAILURE);
    }

    char temp1[LEN_T];
    char temp2[LEN_T];

    while (fgets(temp1, LEN_T, f1))
    {
        fputs(temp1, stdout);
        if ( fgets(temp2, LEN_T, f2) )
        {

            fputs(temp2, stdout);
            if (feof(f2))
                puts("");
        }
        if (feof(f1))
            puts("");
    }
    fclose(f1);
    fclose(f2);


    return 0;
}