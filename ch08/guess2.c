#include <stdio.h>

void print_message(int a);

int main(void)
{
    int guess = 50;
    int max = 100;
    int min = 0;
    char response;
    int status = 1;
    printf("Pick an integer from 1 to 100. I will try to guess\n"); 
    print_message(guess);
    while ((response = getchar()) != 'y') /* get response */ 
    {
        if (response == 'l'){
            min = guess;
            guess = (guess + max) / 2;
            print_message(guess);
        }else if (response == 'h'){
            max = guess;
            guess = (guess + min) / 2;
            print_message(guess);
        }
        else if (response == 'q'){
            status = 0;
            break;
        }
        else
            printf("Sorry, I understand only l, h or y .\n");
        while (getchar() != '\n')
            continue; /* skip rest of input line */
    }
    if(status == 1)    
        printf("I knew I could do it!\n");
    else if(status == 0)    
        printf("Bye\n");
    return 0; 
}

void print_message(int a)
{
    printf("Uh...is your number, %d? if not, is it high or low?\n", a);
    printf("please enter l for low, h for high, y for correct\n");
}