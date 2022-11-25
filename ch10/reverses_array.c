#include<stdio.h>
#include<stdbool.h>

void reverses_array(double* , double* , int);

void testcase1(double*, double*, double*,int);

int main()
{
    double a[5] = {3.2, 23.9, 920.2, -323.2, 128.2};

    double a_r[5] = {128.2, -323.2, 920.2, 23.9, 3.2};

    double a_re[5];

    testcase1(a, a_re, a_r, 5);
}


void testcase1(double* source, double* target, double* a_r, int len)
{
    reverses_array(source, target, len);
    bool err = true;
    for (int i = 0; i <len; i++)
    {
        if(a_r[i] != target[i])
        {
            printf("test has not passed\n");
            err = false;
            break;
        }
        else{
        }
    }
    if (err == true)
        printf("test has passed\n");

}


void reverses_array(double* source, double* target, int len)
{
   
    for (int i = 0; i <len; i++)
    {
        target[len-1-i] = source[i];
    }
    return;
}