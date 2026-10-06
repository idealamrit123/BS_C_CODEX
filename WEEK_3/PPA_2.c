#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#2. WAP To calculate The SI With Double Datatype 

int main()
{
    double principal, rate, time;

    printf("Enter The Principal\n");
    scanf("%lf", &principal);

    printf("Enter The Rate\n");
    scanf("%lf", &rate);

    printf("Enter The Time\n");
    scanf("%lf", &time);

    // solution
    double simpleinterest;
    simpleinterest = (principal * rate * time) / 100;
    printf("%.2lf is the SI", simpleinterest);

    return 0;
}