
#include <stdio.h>

int main()
{
    // capture the input
    printf("type one floating point: ");
    
    float f_input;
    scanf("%f", &f_input);

    //print out the results

    //fixed-point notation
    printf("fixed-point notation: %f\n", f_input);
    
    //exponential notation
    printf("exponential notation: %e\n", f_input);
    
    //p notation
    printf("p notation: %a\n", f_input);

    return 0;
}