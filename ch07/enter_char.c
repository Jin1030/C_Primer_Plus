#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    int n_space = 0;
    int n_newline = 0;
    int n_other = 0;
    printf("Please type in: \n");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case ' ':
                n_space++;
                break;
            case '\n':
                n_newline++;
                break;
            default:
                n_other++;
        }
    }

    printf(" the number of space character: %d\n", n_space);
    printf(" the number of newline character: %d\n", n_newline);
    printf(" the number of other characters: %d\n", n_other);
    return 0;
}