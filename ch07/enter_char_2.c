#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    int n_ch = 0;
    int n_newline = 0;
    int n_other = 0;
    printf("Please type in: (type # to end)\n");
    while ((ch = getchar()) != '#')
    {
        printf("%c %d ", ch, ch);
        if (++n_ch % 8 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}