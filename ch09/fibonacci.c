
//F(0) = 0;
//F(1) = 1;
//F(2) = 1;
//F(3) = 2;
//F(4) = 3;
//F(5) = 5;
//F(n) = F(n-1) + F(n-2);

#include<stdio.h>

int fibo(int a)
{
    int r;
    if( a == 0)
    {
        r = 0;
    }
    if( a == 1)
    {
        r = 1;
    }
    if (a > 1)
    {
       r = fibo(a - 1) + fibo(a - 2); 
    }
    return r;
}

int main()
{
    int i;
    for (i = 0; i <= 20; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;

}