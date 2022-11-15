//convert 

#include <stdio.h>


void br()
{
    printf("Brazil, Russia\n");
}

void ic()
{
    printf("India, China");
}

int main()
{
    printf("Brazil, Russia, India, China\n");

    ic();

    printf(",\n");

    br();

    return 0;
}