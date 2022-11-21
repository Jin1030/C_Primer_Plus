#include<stdio.h>

#define SPACE ' '

int main ()
{
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (ch == SPACE)
        {
            putchar(ch);
        }
        else
        {
            putchar(ch + 1);
        }
    }
    putchar(ch);
    return 0;
}

/*
int main ()
{
    char ch;
    ch = getchar();
    while ((ch != '\n')
    {
        if (ch == SPACE)
        {
            putchar(ch);
        }
        else
        {
            putchar(ch + 1);
        }
        ch = getchar()
    }
    putchar(ch);
    return 0;
}
*/