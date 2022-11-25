#include<stdio.h>


int largest_v(int*, int);

void testcase1(int*, int);

int main()
{
    int a[5] = {3, 23, 90, -3, 28};

    testcase1(a,5);
}


void testcase1(int* a, int len)
{
    if (largest_v(a, len) == 90)
        printf("test has passed\n");

    if (largest_v(a, len) != 90)
        printf("test has not passed\n"); 
}


int largest_v(int* a, int len)
{
    int max = a[0];
    for (int i = 1; i <len; i++)
        max = a[i] > max ? a[i] : max;
    return max;
}