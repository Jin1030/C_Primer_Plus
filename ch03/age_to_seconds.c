
#include <stdio.h>

#define SEC_PER_YEAR 3.156e7

int main()
{
    // capture the input
    printf("your age: ");
    
    int age;
    scanf("%d", &age);

    //age to second
    double age_seconds = age * SEC_PER_YEAR;

    //print out the results
    printf("your age in seconds: %.0lf\n", age_seconds);

    return 0;
}