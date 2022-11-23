#include <stdio.h>
#include <stdbool.h>

double min_d(double a, double b)
{
    return (a < b) ? a : b;
}


bool testcase_1(void)
{
    if (2.3 == min_d(2.3, 8.9))
        return true;
    else
        return false;
}

bool testcase_2(void)
{
    if (-8.9 == min_d(2.3, -8.9))
        return true;
    else
        return false;
}

bool testcase_3(void)
{
    if (-12.3 == min_d(-12.3, -8.9))
        return true;
    else
        return false;
}




int main()
{
    if (testcase_1())
    {
        printf("testcase1 has passed\n");
    }
    else
    {
        printf("testcase1 has not passed\n");
    }
    
    if (testcase_2())
    {
        printf("testcase2 has passed\n");
    }
    else
    {
        printf("testcase2 has not passed\n");
    }

    if (testcase_3())
    {
        printf("testcase3 has passed\n");
    }
    else
    {
        printf("testcase3 has not passed\n");
    }
}