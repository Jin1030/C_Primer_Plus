#include <stdio.h>

int main()
{
    const int secret_code = 13;

    int code_entered;
    int status;

    do 
    {
        printf("To enter the triskaidekaphobia therapy club, enter q to quit\n");
        status = scanf("%d", &code_entered);
        if (status != 1)
        {
            return 0;
        }            
    } while (code_entered != secret_code);

    printf("Congratulations! You are cured!\n");

    return 0;
}