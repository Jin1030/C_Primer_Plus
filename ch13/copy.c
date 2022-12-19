#include <stdio.h>
#include <stdlib.h>
#define SLEN 101


int main()
{
    char file1[SLEN];
    char file2[SLEN];
    FILE* fp1;
    FILE* fp2;
    char ch;

    puts("Enter the name of the file to be copied: ");
    scanf("%100s", file1);
    puts("Enter the name of the new file to be copied as: ");
    scanf("%100s", file2);

    if ((fp1 = fopen(file1, "rb+")) == NULL)
    {
        printf("Cant't open %s\n", file1);
        exit(EXIT_FAILURE);
    }

    if ((fp2 = fopen(file2, "wb+")) == NULL)
    {
        printf("Cant't open %s\n", file2);
        exit(EXIT_FAILURE);
    }
    
    while((ch = getc(fp1))!= EOF)
    {
        putc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

}