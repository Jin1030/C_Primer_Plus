#include<stdio.h>

int main()
{
    char ch;
    int start = 65;
    printf("please enter a  capital letter: ");
    int status = scanf("%c", &ch);
    int size = ch - start + 1;
    if (status == 1)
    {
        for(int i; i < size; i++)
        {
            for(int j = 0; j < 2 * i + 1; j++)
            {
                if (j < i)
                {
                    printf("%c", start);
                    start++;
                }
                if (j == i)
                {
                    printf("%c", start);
                }
                if (j > i)
                {
                    start--;
                    printf("%c", start);

                }   
            }
            start = 65;
            printf("\n");
        }
    }
    else{
        return 0;
    }
}