#include <stdio.h>
#include <float.h>
#define MAX_LEN 30

int main()
{
    float f_v = 1.0 / 3.0;
    double d_v = 1.0 / 3.0;

    printf("FLT_DIG: %d, DBL_DIG: %d\n", FLT_DIG, DBL_DIG);
    printf("f : %.6f, DBL_DIG: %.6f\n", f_v, d_v); 
    printf("f : %.12f, DBL_DIG: %.12f\n", f_v, d_v); 
    printf("f : %.16f, DBL_DIG: %.16f\n", f_v, d_v); 

    return 0;
}