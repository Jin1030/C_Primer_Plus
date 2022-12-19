#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "get_filename.h"

#define LEN 100


int main()
{
    char *ret_val;
    char input[LEN];
    char *find;
    char ch;

    puts("Enter name of a file");
    get_fname(input, LEN);

    printf("%s\n", input);
    //printf("%s\n", str2);
    printf("The length of the string is: %lu\n", strlen(input));
/*
    find = strchr(input, '\n');
    if(find)
        puts("yes, there is");
    else
        puts("no, it is not there.");
    
    FILE* fp1;
    if ((fp1 = fopen(input, "r+")) == NULL)
    {
        printf("Cant't open %s\n", input);
        exit(EXIT_FAILURE);
    }
    else
    {
        while((ch = getc(fp1))!= EOF)
        {
            putc(ch, stdout);
        }
    }
*/
    return 0;

}