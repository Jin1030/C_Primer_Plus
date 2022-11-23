// Write a program that reads input as a stream of characters until encountering EOF

// Have it report 
// the number of uppercase letters
// the number of lowercase letters
// the number of other characters in the input. 

// Note that characters preceding the space character in the ASCII sequence 
// are nonprinting characters. Treat them specially.

//If the nonprinting character is a newline or tab, print \n or \t, respectively.
//Otherwise, use control-character notation. 
//For instance, ASCII 1 is Ctrl+A, which can be displayed as ^A. 
//Note that the ASCII value for A is the value for Ctrl+A plus 64. 

//

#include <stdio.h>
#include <ctype.h>
int main(void)
{

    int count_l = 0;
    int count_h = 0;
    int count_else = 0;
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
        {
            count_l++;
        }
        else if(isupper(ch))
        {
            count_h++;
        }
        else
        {
            count_else++;
        }
    }

	printf("Character Counts\n");
	printf("Uppercase letters: %d\n", count_h);
	printf("Lowercase letters: %d\n", count_l);
	printf("Other: %d\n", count_else);

    return 0; 
}
