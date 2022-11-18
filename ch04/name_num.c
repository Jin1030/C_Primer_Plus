#include <stdio.h>
#include <string.h>
#define MAX_LEN 30

int main()
{
    // capture the input
    printf("please enter your firstname and Surname: ");
    
    char firstname[MAX_LEN];
    char surname[MAX_LEN];
    scanf("%s %s", firstname, surname);
    unsigned width_r = 20;
    unsigned width_l = -20;
    
    int len_f = strlen(firstname);
    int len_sur = strlen(surname);

    //print out the name 
    printf("%s %s\n", firstname, surname);

    //print out the length of each name and right-aligned with name
    printf("%*d %*d\n", len_f, len_f, len_sur, len_sur);

    //print out the name 
    printf("%s %s\n", firstname, surname);

     //print out the length of each name and left-aligned with name
    printf("%*d %*d\n", len_f*-1, len_f, len_sur*-1, len_sur);

    return 0;
}