#include <stdio.h>

int main(void)
{
    int i;

    printf("Enter one integer : \n");

    scanf("%d", &i);

    const int i_10times = 10 + i;

    printf("%d ", i);

    while( ++i <= i_10times)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}