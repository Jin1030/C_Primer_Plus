//convert 

#include <stdio.h>

int main()
{
    //store my age
    int my_age;
    my_age = 33;

    //days per year
    const int day_per_year = 365;
    //convert to days
    int days = 33 * day_per_year; 
    
    //print the days
    printf("days: %d\n", days);

    return 0;
}