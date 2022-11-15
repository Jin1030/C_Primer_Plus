#include <stdio.h>


void br();
void ic();

int main()
{
    printf("Brazil, Russia, India, China\n");

    ic();

    printf(",\n");

    br();

    return 0;
}

void br()
{
    printf("Brazil, Russia\n");
}

void ic()
{
    printf("India, China");
}