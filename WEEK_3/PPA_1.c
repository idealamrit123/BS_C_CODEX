#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#1. WAP To find the sum of the N natural number
int main()
{
    int n,sum;
    printf("Enter The Number\n");
    scanf("%d",&n);
    // Formula of N natural number ==> (n*(n+1))/2 
    sum = (n*(n+1))/2;
    printf("%d is the Sum",sum);


    return 0;
}