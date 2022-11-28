#include<stdio.h>

#define LIM 5

#define SLEN 40



int main(void)
{
    printf("%s, %p, %c\n", "W\0e", "are", *("space farers"));

    char*a = "abc";

    char *mytalents[LIM] = {
    "Adding numbers swiftly",
    "Multiplying accurately", 
    "Stashing data", 
    "Following instructions to the letter", 
    "Understanding the C language"
    };

    char yourtalents[LIM][SLEN] = {
    "Walking in a straight line", 
    "Sleeping", "Watching television", 
    "Mailing letters", 
    "Reading email"
    };

    printf("%s\n", mytalents[1]);
    printf("%s\n", yourtalents[1]);
    printf("%c\n", a[1]);
    printf("%lu\n", sizeof mytalents);
    printf("%lu\n", sizeof yourtalents);


    const char *head = "I love Millie!";
    while (*(head) != '\0') /* stop at end of string */ 
        putchar(*(head++)); /* print character, advance pointer */  
    return 0;

    


}

