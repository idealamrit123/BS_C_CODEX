#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#3. WAP To Find The Volume Of Sphere
int main()
{
     double volume ,Radius;
     printf("Enter The Radius\n");
     scanf("%lf",&Radius);
     double pi ;
     pi = 3.14159;
     // Formula 
     volume = (4.0/3.0)*pi*Radius*Radius*Radius;
     printf("%.3lf is the Volume of sphere\n",volume);


    return 0;
}