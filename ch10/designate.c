#include <stdio.h>

#define MONTHS 12
int main (void)
{
    int days[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    int i;

    for (i = 0; i < MONTHS; i++)
        printf("%2d %d\n", i + 1, days[i]);

    int staff[] = {1, [6] = 4, 9, 10}; // what happens?

    int i1 = sizeof staff / sizeof staff[0];
    printf("i1 = %d\n", i1);
    return 0;

}