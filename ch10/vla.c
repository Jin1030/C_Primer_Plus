#include<stdio.h>
#define ROW 3
#define COLUMN 5


void printf_a(double (*)[5], int);

void negative_a(double (*)[5], int);

int main()
{
    double a[3][5]=
    {
        {4.3,4.3,4.3,3.0,2.0}, 
        {8.5,8.2,1.2,1.6,2.4}, 
        {9.1,8.5,6.7,4.3,2.1}
    };

    printf_a(a,3);

    negative_a(a,3);

    printf_a(a,3);
}


void printf_a(double (*a)[5], int row)
{
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<5; j++)
        {
            printf(" %.2f ", a[i][j]);            
        }
        putchar('\n');
    }
}

void negative_a(double (*a)[5], int row)
{
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<5; j++)
        {
            *(*(a+i)+j) = a[i][j] * -1;
        }
        putchar('\n');
    }
}