#include <stdio.h>

#define CENT_PER_INCH 2.54

int main()
{
    // capture the input
    printf("please enter your height in inch: ");
    
    float h_in;
    scanf("%f", &h_in);


    //height in centimeter
    double h_centi = h_in * CENT_PER_INCH;

    //print out the results
    printf("Your height in centimeter: %.02f cm\n", h_centi);

    return 0;
}