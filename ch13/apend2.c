#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "get_filename.h"
#define SLEN 81
#define BUFSIZE 4096 

void append(FILE *source, FILE *dest);


int main(int argc, char *argv[])
{
    FILE *fa, *fs;
    int files = 0;
    char file_app[SLEN];
    char file_src[SLEN];
    int ch;

    puts("Enter name of destination file");
    printf("argc: %d. \n", argc);
    //get_fname(file_app, SLEN);
    if ((fa = fopen(argv[argc - 1], "a+")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[argc - 1]);
        exit(EXIT_FAILURE);
    }
    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("Can't creat output buffer\n", stderr);
        exit(EXIT_FAILURE);
    }
    puts("Enter name of first source file (empty line to quit):");
    for( int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], argv[argc - 1]) == 0)
        {
            fputs("Can't append file to iteself\n", stderr);
        }
        else if ((fs = fopen(argv[i], "r")) == NULL)
            fprintf(stderr, "Can't open %s\n", argv[i]);
        else
        {
            if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
            {
                fputs("Can't create input buffer\n", stderr);
                continue;
            }
            append(fs, fa);
            if (ferror(fs) != 0)
            {
                fprintf(stderr, "Error in reading file %s.\n", argv[i]);
            }
            if (ferror(fa) != 0)
            {
                fprintf(stderr, "Error in write file %s.\n", argv[argc - 1]);
            }
            fclose(fs);
            files++;
            printf("File %s appended. \n", argv[i]);
            puts("Next file (empty line to quit):");
        }
    }
    printf("Done appending. %d files appended.\n", files);
    rewind(fa);
    printf("%s contents:\n", argv[argc - 1]);
    while ((ch = getc(fa)) != EOF)
        putchar(ch);
    puts("Done displaying.");
    fclose(fa);

    return 0;

}

void append(FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE];

    while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
        fwrite(temp, sizeof(char), bytes, dest);
}
