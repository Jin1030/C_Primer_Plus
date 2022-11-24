#include<stdio.h>


void arry_c1(double [], double [], int);

void arry_c2(double *, double *, int);

void arry_c3(double *, double *, double *);

void printf_array(double [], int);


int main()
{
    double a1[5] = { 3.2, 9.8, 2.3, 21.4, 633.5 };

    double a2[5];

    double a3[5];

    double a4[5];

    //printf_array(a2, 5);

    arry_c1(a1,a2, 5);

    printf_array(a2, 5);

    arry_c1(a1,a2, 5);

    arry_c2(a1,a3, 5);

    printf_array(a3, 5);

    arry_c3(a1,a4, a1 + 5);

    printf_array(a4, 5);

}


void printf_array(double a[], int lens)
{
    for (int i = 0; i < lens; i++ )
    {
        printf("element: %.1f", a[i]);
        printf("\n");
    }

}

void arry_c1(double s[], double t[], int lens)
{
    for (int i = 0; i < lens; i++ )
    {
        t[i] = s[i];
    }
}

void arry_c2(double *s, double *t, int lens)
{
    for (int i = 0; i < lens; i++)
    {
        *(t++) = *(s++);
    }
}


void arry_c3(double *s, double *t, double *s_last)
{
    int len = s_last - s;
    for(int i = 0; i < len; i++)
    {
        *(t++) = *(s++);
    }
}
