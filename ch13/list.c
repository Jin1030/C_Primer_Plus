#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        fputs(argv[i], stdout);
        putchar('\n');
    }

    return 0;

}