
/* addaword.c -- uses fprintf(), fscanf(), and rewind() */ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#define MAX 41

void get_index (FILE*, int*);


int main(void) 
{
    FILE *fp;
    char words[MAX];
    int index = 0;
    fpos_t pos;
    char cc;
    if ((fp = fopen("wordy.txt", "a+")) == NULL) 
    {
        fprintf(stdout,"Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE); 
    }

    if( ftell(fp) == 0)
    {
        index = 1;
    }
    else
    {
        get_index(fp, &index);
    }

    fseek(fp, 0, SEEK_END);


    puts("Enter words to add to the file; press the #");
    puts("key at the beginning of a line to terminate.");
    
    while ((fscanf(stdin,"%40s", words) == 1) && (words[0] != '#'))
    {
        fprintf(fp, "%d: %s\n", index, words);
        index++;
    }
    
    puts("File contents:");
    
    rewind(fp); /* go back to beginning of file */ 
    
    while (fscanf(fp,"%s",words) == 1)
        puts(words); 
    
    puts("Done!");
    
    if (fclose(fp) != 0)
        fprintf(stderr,"Error closing file\n");
    
    return 0; 
    }


    void get_index (FILE* fp, int* index)
    {
        char cc;
        // file pointer set back two bytes
        fseek(fp, -2, SEEK_CUR);
        while ((cc = fgetc(fp)) != '\n')
        {
            if (cc == '1')
            {
                *index = 1;
                break;
            }
            else
            {
                fseek(fp, -2, SEEK_CUR);
            }
        }

        if (*index != 1)
        {
            cc = fgetc(fp);
            //*index = atoi(&cc) + 1;
            *index = cc - '0' + 1;
        }
    }