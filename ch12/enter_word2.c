#include<stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 100

int num;

int main()
{
    printf("how many words you wish to enter\n");
    scanf("%d", &num);

    //words is a pointer, which points to a string array.
    //num defines the number of strings in the array

    char words[num][MAX_WORD_LENGTH];

    printf("Enter %d words now: \n", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%s", words[i]);
    }

    printf("Here are your words:\n");

for(int i = 0; i < num; i++)
{
    printf("%s\n", words[i]);
}

return 0;
}