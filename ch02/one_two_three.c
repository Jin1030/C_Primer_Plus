#include <stdio.h>

void two();

void one_three();

int main()
{
    printf("starting now:\n\n");

    one_three();

    printf("done!\n");

    return 0;
}

void two()
{
    printf("two\n\n");
}

void one_three()
{
    printf("one\n\n");

    two();

    printf("three\n\n");
}