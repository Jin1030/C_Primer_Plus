// offering you the choice of addition, subtraction, multiplication, or division. 


#include <stdio.h>

void print_message(void);

int main(void)
{
    float n1;
    float n2;
    int response;
    float result;
    char ch;
    print_message();
    
    while ((response = getchar()) != '\n')
    {
        if (response == 'q')
        {
            break;
        }
        else if (response != '1' && response != '2' && response != '3' && response != '4')
        {
            printf("this is not a valid choice, please do it again\n");
            getchar();
        }
        else{
            getchar();
            printf("please enter first number: \n");
            while(scanf("%f", &n1) != 1)
            {
                while ((ch = getchar()) != '\n') // echo user input and clear stream
                    putchar(ch);
                printf(" is not a number.\n");
                printf("please enter first number: \n");
            }

            // clear the stream
            while ((ch = getchar()) != '\n') 
                continue;
            
            printf("please enter second number: \n");
            while(scanf("%f", &n2) != 1)
            {
                while ((ch = getchar()) != '\n') // echo user input and clear stream
                    putchar(ch);
                printf(" is not a number.\n");
                printf("please enter second number: \n");
            }
            // clear the stream
            while ((ch = getchar()) != '\n')
            continue;

            switch (response){
                case '1':
                result = n1 + n2;
                printf("%0.2f + %0.2f = %0.2f\n", n1, n2, result);
                break;
                case '2':
                result = n1 - n2;
                printf("%0.2f - %0.2f = %0.2f\n", n1, n2, result);
                break;
                case '3':
                result = n1 * n2;
                printf("%0.2f * %0.2f = %0.2f\n", n1, n2, result);
                break;
                case '4':
                while ( n2 == 0)
                {
                    printf("the second value can not be 0, please enter a new second number: \n");
                    while(scanf("%f", &n2) != 1)
                    {
                        while ((ch = getchar()) != '\n') // echo user input and clear stream
                        {    
                            putchar(ch);
                        }
                        printf(" is not a number.\n");
                        printf("please enter second number: \n");
                    }
                    while ((ch = getchar()) != '\n')
                        continue;
                }
                result = n1 / n2;
                printf("%0.2f / %0.2f = %0.2f\n", n1, n2, result);
                printf("\n");
            }
            print_message();
        }
    }
    printf("Bye\n");
    return 0;
}

void print_message(void)
{
    printf("###############################################################\n"); 
    printf("Pick one operation from 1 to 4. I will do the math for you\n");
    printf("1) addition                 2)subtraction\n");
    printf("3) multiplication           4)division\n");
    printf("q. quit\n");
    printf("###############################################################\n");
}
