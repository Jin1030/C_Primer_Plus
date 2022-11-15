//Need a Program to convert inches to centimeters

#include <stdio.h>

int main()
{
    //create the variable to save the inches
    double inches_entry;

    //receive the input
    printf("please enter the inches: ");
    scanf("%lf", &inches_entry);

    // convert the value
    double centimeters = inches_entry * 2.54;

    //print the result
    printf("centimeters: %.2lf\n", centimeters);
    return 0;
}