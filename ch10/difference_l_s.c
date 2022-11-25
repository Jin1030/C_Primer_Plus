#include<stdio.h>


double difference_l_s(double *, int);

void testcase1(double*, int, double);

int main()
{
    double a[5] = {3.2, 23.9, 920.2, -323.2, 128.2};

    double t_v = a[2]-a[3];

    testcase1(a,5, t_v);
}


void testcase1(double* a, int len, double t_v)
{
    if (difference_l_s(a, len) == t_v)
        printf("test has passed\n");

    if (difference_l_s(a, len) != t_v)
    {
        printf("test has not passed\n");
        printf("t_v= %f\n", t_v);
        printf("result= %f\n", difference_l_s(a, len)); 
    }

}


double difference_l_s(double* a, int len)
{
    double max_v = a[0];
    double min_v = a[0];
    for (int i = 1; i <len; i++)
    {
        max_v = (a[i] > max_v)? a[i] : max_v;
        min_v = (a[i] < min_v)? a[i] : min_v; 
    }
    return (max_v - min_v);
}