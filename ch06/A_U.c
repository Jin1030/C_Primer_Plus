#include<stdio.h>
#define ROW 6
int main()
{
    int start = 65;
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", start);
            start++;
        }
        printf("\n");
    }
}
