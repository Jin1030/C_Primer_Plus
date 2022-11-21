#include <stdio.h>
#define HOURS_MAX 40
#define TAX_RATE1 0.15f
#define TAX_RATE2 0.20f
#define TAX_RATE3 0.25f
#define TAX_BASELINE 300
#define TAX_BASELINE2 150

#define OP1 '1'
#define OP2 '2'
#define OP3 '3'
#define OP4 '4'
#define OP5 '5'


float cal_salary(float payrate, float hours);

float cal_tax(float salary);

void print_options(void);

int main(void)
{
    float hours;
    float salary;
    float tax;
    float net_income;

    float payrate;

    char op;
    print_options();
    //while(scanf("%d", &op) == 1)
    while((op = getchar()) != OP5 )
    {
        switch(op)
        {
            case OP1:
                payrate = 8.75;
                break;
            case OP2:
                payrate = 9.33;
                break;
            case OP3:
                payrate = 10.00;
                break;
            case OP4:
                payrate = 11.20;
                break;
            case '\n':
                continue;
            default:
                printf("please choose the number between 1 and 5\n");
                print_options();
        }
        if(scanf("%f", &hours) == 1)
        {
            // salary
            float salary = cal_salary(payrate, hours);

            // tax
            float tax = cal_tax(salary);

            net_income = salary - tax;

            printf("salary: %.1f\ntax: %.1f\nnet_income: %.1f\n", salary, tax, net_income);
        }
    }
    return 0;

}


float cal_salary(float payrate, float hours)
{
    float salary;
    if (hours <= HOURS_MAX)
    {
        salary = hours * payrate;
    }
    else
    {
        salary = HOURS_MAX * payrate + (hours - HOURS_MAX) * 1.5 * payrate;
    }
    return salary;
}

float cal_tax(float salary)
{
    float tax;
    if (salary <= TAX_BASELINE)
    {
        tax = TAX_RATE1 * salary;
    }
    else if ((TAX_BASELINE < salary) && (salary <= (TAX_BASELINE + TAX_BASELINE2)))
    {
        tax = TAX_RATE1 * TAX_BASELINE + TAX_RATE2 * (salary - TAX_BASELINE);
    }
    else
    {
        tax =  TAX_RATE1 * TAX_BASELINE + TAX_BASELINE2 * TAX_RATE2 + (salary - TAX_BASELINE - TAX_BASELINE2) * TAX_RATE3;
    }
    return tax;

}

void print_options(void)
{
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr                2) $9.33/hr\n");
    printf("3) $10.00/hr               4) $11.20/hr\n");
    printf("5) quit\n");
    printf("*****************************************************************\n");
}

