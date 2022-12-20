#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strtok()
#include "get_filename.h"
#define LEN 100

int check_character( char, char*);


int main(int argc, char* argv[])
{
    char f_name[LEN];
    char *name;
    char files[100][100];
    int index = 0;
    char c;
    int count = 0;


    if (argc == 2)
    {
        c = argv[1][0];
        puts("Enter name of destination file");
        get_fname(f_name, LEN);
        name = strtok(f_name, " ");
        while (name != NULL) 
        {
            strcpy(files[index], name);
            index++;

            name = strtok(NULL, " ");
        }
        for (int i = 0; i < index; i++)
        {
            count = check_character(c, files[i]);
            if (count != -1)
                printf("character \"%c\" has found %d times in %s\n", c, count, files[i]);
        }
    }
    else if (argc > 2)
    {
        c = argv[1][0];
        for (int i = 2; i < argc; i++)
        {
            count = check_character(c, argv[i]);
            if (count != -1)
                printf("character \"%c\" has found %d times in %s\n", c, count, argv[i]);
        }
    }
    else
    {
        puts(" No character were found ");
        exit(EXIT_FAILURE);
    }

    return 0;
}


int check_character( char c, char* name)
{
    int ch;
    int count = 0;
    FILE* fa;
    if ((fa = fopen(name, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", name);
        perror("Error opening file");
        //exit(EXIT_FAILURE);
        count = -1;
    }
    else
    {
        while ((ch = fgetc(fa)) != EOF)
        {
            if (ch == c)
            {
                count++;
            }
        }
    }
    fclose(fa);
    return count;
}