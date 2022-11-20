#include<stdio.h>
#define ROW 10

int main()
{
for(int i = 0; i < ROW; i++)
{
    for(int j = 0; j <= i; j++)
    {
        printf("$");
    }
    printf("\n");
}
}