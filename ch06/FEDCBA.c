#include<stdio.h>

int main()
{
    char string[] = "FEDCBA";
    for(int i = 0; i < sizeof(string) - 1; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", string[j]);
        }
        printf("\n");
    }
}