// Devise a program that counts the number of characters in its input up to the
// end of file.



#include <stdio.h>
int main(void)
{

    int count = 0;
    while (getchar() != EOF)
    {
        count++;
    }
    printf("the number of character: %d\n", count);
    return 0; 
}
