#include <stdio.h>

#define SIZE 10

int main()
{
    int index, score[SIZE];
    int sum = 0;
    float average;

    printf("enter %d golf scores: \n", SIZE);

    for (index = 0; index <SIZE; index++)
    {
        scanf("%d", &score[index]);
    }
    printf("The scores read in are as follows:\n");

    for (index = 0; index < SIZE; index++)
    {
        printf( "the %dth score: %d\n", index, score[index]);
    }

    for (index = 0; index < SIZE; index++)
    {
        sum = sum + score[index];
    }

    average = (float)sum / SIZE;
    printf("------\n");

    printf("Sum of scores = %d, average = %.2f\n", sum,  average);

    return 0;


}