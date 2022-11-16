#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
    int upper_int = INT_MAX;
    printf( "%d\n", upper_int);
    printf( "%d\n", upper_int + 1);

    int lower_int = INT_MIN;
    printf( "%d\n", lower_int);
    printf( "%d\n", lower_int - 1);

    float upper_f = FLT_MAX;
    printf( "%f\n", upper_f);
    printf( "%f\n", upper_f+12.0);

    float lower_f = FLT_MIN;
    printf( "%f\n", lower_f);
    printf( "%f\n", lower_f-12.0);
    return 0;

}