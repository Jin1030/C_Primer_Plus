#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "get_filename.h"
#define SLEN 81
#define BUFSIZE 4096 

void append(FILE *source, FILE *dest);


int main(void)
{
    FILE *fa, *fs;
    int files = 0;
    char file_app[SLEN];
    char file_src[SLEN];
    int ch;

    puts("Enter name of destination file");
    get_fname(file_app, SLEN);
    if ((fa = fopen(file_app, "a+")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", file_app);
        exit(EXIT_FAILURE);
    }
    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("Can't creat output buffer\n", stderr);
        exit(EXIT_FAILURE);
    }
    puts("Enter name of first source file (empty line to quit):");
    while (get_fname(file_src, SLEN) && file_src[0] != '\0')
    {
        if (strcmp(file_src, file_app) == 0)
        {
            fputs("Can't append file to iteself\n", stderr);
        }
        else if ((fs = fopen(file_src, "r")) == NULL)
            fprintf(stderr, "Can't open %s\n", file_src);
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
                fprintf(stderr, "Error in reading file %s.\n", file_src);
            }
            if (ferror(fa) != 0)
            {
                fprintf(stderr, "Error in write file %s.\n", file_app);
            }
            fclose(fs);
            files++;
            printf("File %s appended. \n", file_src);
            puts("Next file (empty line to quit):");
        }
    }
    printf("Done appending. %d files appended.\n", files);
    rewind(fa);
    printf("%s contents:\n", file_app);
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
