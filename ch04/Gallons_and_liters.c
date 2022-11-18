#include <stdio.h>
#include <string.h>
#define F_DIG 1

int main()
{
    // capture the input
    printf("please enter your miles and gallons: ");
    float m;
    float ga;
    scanf("%f %f", &m, &ga);
    
    float m_per_ga = m / ga;
    printf("miles per gallons: %.*f\n", F_DIG, m_per_ga);

    const float ga_to_liters = 3.785; 
    const float miles_to_km = 1.609;

    float liter_per_100km = (ga * ga_to_liters) / (m * miles_to_km) * 100;
    printf("liter per 100km: %.*f\n", F_DIG, liter_per_100km);

    return 0;
}