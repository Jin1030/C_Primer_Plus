/* test the rand0() function */

#include <stdio.h>
int rand0(void);
void srand1(unsigned int seed);

int main(void)
{
    int count;
    unsigned seed;

    printf("Please enter your choice for seed.\n");
    while(scanf("%u", &seed) == 1)
    {
        srand1(seed);
        for(count = 0; count < 5; count++)
            printf("%d\n",rand0());
        printf("Please enter next seed (q to quit):\n");
    }
    printf("Done\n");

    return 0;
}