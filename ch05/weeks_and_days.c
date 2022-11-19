#include <stdio.h>

#define DAYS_PER_WEEKS 7

int main(void)
{
    int days, weeks, days_l;

    printf("Convert days to weeks and days!");

    printf("Enter the number of days (<=0 to quit): \n");

    scanf("%d", &days);

    while( days > 0)
    {
        weeks = days / DAYS_PER_WEEKS;

        days_l = days % DAYS_PER_WEEKS;

        printf("%d days are %d weeks, %d days.\n", days, weeks, days_l);
        
        printf("Enter next value (<=0 to quit): \n");

        scanf("%d", &days);
    }

    printf("Done!\n");

    return 0;

}