
#include <stdio.h>

//mass
#define MASS_PER_W 3e-23

//gram per quart
#define G_PER_QUART 950

int main()
{
    // capture the input
    printf("please enter Water quart number: ");
    
    double w_q;
    scanf("%lf", &w_q);

    //number_water
    double number_water = w_q * G_PER_QUART / MASS_PER_W;

    //print out the results
    printf("The number of water molecules: %.0f\n", number_water);

    return 0;
}