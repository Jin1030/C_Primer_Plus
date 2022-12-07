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
    //char **words = (char **)malloc(num * sizeof(char *));

    char *words[3];
/*
    if (words == NULL)
    {
        printf("Failed to allocate memory for words\n");
        return 1;
    }
*/
    printf("Enter %d words now: \n", num);
    char temp[MAX_WORD_LENGTH];
    for (int i = 0; i < num; i++)
    {
        scanf("%s", temp);
        words[i] = (char *) malloc((strlen(temp) + 1) * sizeof(char));
        strcpy(words[i], temp);
    }

    printf("Here are your words:\n");

    for(int i = 0; i < num; i++)
    {
        printf("%s\n", words[i]);
    }

    for (int i = 0; i < num; i++)
    {
        free(words[i]);
    }

    //free (words);


    return 0;
}
