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

    //print out the name with double quotation marks
    printf("Your name is : \"%s %s\"\n", firstname, surname);

    //print out the name with double quotation marks and width 20 right
    printf("Your name is : \"%*s %*s\"\n", width_r, firstname, width_r, surname);

    //print out the name with double quotation marks and width 20 left
    printf("Your name is : \"%*s %*s\"\n", width_l, firstname, width_l, surname);

    //Print first name and last name in a field that is 3 wider than the width of the whole name
    printf("Your name is : \"%*s %*s\"\n", len_f + 3, firstname, len_sur + 3, surname);

    return 0;
}