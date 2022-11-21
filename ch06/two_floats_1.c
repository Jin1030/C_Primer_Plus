#include <stdio.h>

float cal(float f1, float f2);

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
            float rs = cal(fl1,fl2);
            printf("result= %f\n",rs);
        }
    } while (status == 2);
    

}

float cal(float f1, float f2)
{
    float rs = (f1 - f2)/(f1 * f2);
    return rs;
}
