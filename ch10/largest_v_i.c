#include<stdio.h>


int largest_v_i(int*, int);

void testcase1(int*, int);

int main()
{
    int a[5] = {3, 23, 90, -3, 128};

    testcase1(a,5);
}


void testcase1(int* a, int len)
{
    if (largest_v_i(a, len) == 4)
        printf("test has passed\n");

    if (largest_v_i(a, len) != 4)
        printf("test has not passed\n"); 
}


int largest_v_i(int* a, int len)
{
    int max = a[0];
    int i_m = 0;
    for (int i = 1; i <len; i++)
    {
        if (a[i] > max){
            i_m = i;
            max = a[i];    
        }
    }
    return i_m;
}