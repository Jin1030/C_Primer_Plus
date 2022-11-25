#include<stdio.h>
#include<stdbool.h>
#define YEARS 5
#define MONTHS 12



void arry_c2(const double*, double*);


void printf_array(double*);

int main()
{
    const double cola_purchase [YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6}, 
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3}, 
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4}, 
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2}, 
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
    
    double bier_purchase[YEARS][MONTHS];

    arry_c2(&cola_purchase[0][0], &bier_purchase[0][0]);

    printf_array(&bier_purchase[0][0]);


    

}


void arry_c2(const double *s, double *t)
{
    for (int i = 0; i < YEARS; i++)
    {
        for(int j = 0; j < MONTHS; j++)
        {
            *(t++) = *(s++);
        }
        
    }
}

void printf_array(double* s)
{
    for (int i = 0; i < YEARS; i++)
    {
        for(int j = 0; j < MONTHS; j++)
        {
            printf("%.1f ", *(s++));
        }
        printf("\n");
    }
}