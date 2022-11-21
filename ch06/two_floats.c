#include <stdio.h>

int main()
{
    float fl1, fl2;
    int status;
    
    do
    {
        printf("enter two float number, enter non-number to quit\n");
        status = scanf("%f %f", &fl1, &fl2);
        if (status != 2)
        {
            return 0;
        }
        else
        {
            float rs = (fl1 - fl2)/(fl1 * fl2);
            printf("result= %f\n",rs);
        }
    } while (status == 2);
    

}