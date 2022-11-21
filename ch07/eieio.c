#include<stdio.h>


int main()
{
    char ch, ch_1, ch_2;
    int ch_i = 0;
    int ei_i = 0;
    printf("Please type in: (type # to end)\n");
    while ((ch = getchar()) != '#')
    {
        ch_2 = ch;
        if( ch_1 == 'e' && ch_2 == 'i')
        {
             ei_i++;
        }
        ch_1 = ch_2;
    }
    printf("the number of \"ei\": %d\n", ei_i);
    return 0;
}