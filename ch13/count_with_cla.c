#include <stdio.h>
#include <stdlib.h>
#define SLEN 100



int main()
{
    int ch;      //place to store each character as read
    FILE *fp;
    unsigned long count = 0;
    char file[SLEN];
    puts("Enter the name of the file to be processed: ");
    scanf("%99s", file);

    if ((fp = fopen(file, "r")) == NULL)
    {
        printf("Cant't open %s\n", file);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF)
    {
        putc(ch,stdout);
        count++;
    }
    fclose(fp);
    
    printf("File %s has %lu characters\n", file, count);

    return 0;
}