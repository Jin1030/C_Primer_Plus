#include<stdio.h>
#include<string.h>

int main()
{
    char ch[30];
    printf("please enter a word: ");
    int status = scanf("%s", ch);

    if (status == 1)
    {
        for(int i = strlen(ch) - 1; i >= 0; i--)
        {
            printf("%c", ch[i]);
        }
        printf("\n");
    }
    else{
        return 0;
    }
   return 0;
}