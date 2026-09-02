#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Codes For Understandings Basic Of C
//Topics : Cover ==> Area of circle 
float constPI = 3.14159 ; // Declaring The Universal constant PI
int main() // Gate Function
{
    float radius ,Area ; //Initialise The Value in float for better Decimal Operation 
    printf("Please Enter The Radius Value\n");
    scanf("%f",&radius);
    Area = (constPI * radius * radius); // Formula of Area of Circle
    printf("Area Of Circle = %.3f",Area);
    return 0;
}