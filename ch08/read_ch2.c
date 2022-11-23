// Write a program that reads input as a stream of characters until encountering EOF

// Have the program print each input character and its ASCII decimal value.

// Note that characters preceding the space character in the ASCII sequence 
// are nonprinting characters. Treat them specially.

//If the nonprinting character is a newline or tab, print \n or \t, respectively.
//Otherwise, use control-character notation. 
//For instance, ASCII 1 is Ctrl+A, which can be displayed as ^A. 
//Note that the ASCII value for A is the value for Ctrl+A plus 64. 

//

#include <stdio.h>
int main(void)
{

    int count = 0;
    int ch;
    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
        {
            printf("\n");
        }
        else if (ch < ' ')
        {
            printf("\'^%c\': %d ", ch + 64, ch );
        }
        else
        {
            printf("%c%d/ ", ch, ch);
        }

        count++;

        if( count % 10 == 0)
        {
             printf("\n");   
        }
    }

	printf("\n");

    return 0; 
}
