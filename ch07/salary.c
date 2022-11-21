#include <stdio.h>
#define DOLLAR_PER_HOUR 10
#define HOURS_MAX 40
#define TAX_RATE1 0.15f
#define TAX_RATE2 0.20f
#define TAX_RATE3 0.25f
#define TAX_BASELINE 300
#define TAX_BASELINE2 150



int main()
{
    float hours;
    float salary;
    float tax;
    float net_income;
    printf("please enter your working hours: ");
    if(scanf("%f", &hours) == 1)
    {
        // salary
        if (hours <= HOURS_MAX)
        {
            salary = hours * DOLLAR_PER_HOUR;
        }
        else
        {
            salary = HOURS_MAX * DOLLAR_PER_HOUR + (hours - HOURS_MAX) * 1.5 * DOLLAR_PER_HOUR;
        }

        // tax
        if (salary <= TAX_BASELINE){
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

        net_income = salary - tax;

        printf("salary: %.1f\ntax: %.1f\nnet_income: %.1f\n", salary, tax, net_income);

    }

}