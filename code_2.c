#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Programme : Basics ==> To check whether the number is Prime or not 
// Using Functions
//Function 1 => Prime()
int prime(int ); //Function Declaration
int prime(int a) //Function Definition
{
if(a<= 1)
return 0;
for(int i = 2; i < a ; i++)
{
    if(a % i == 0 )
    return 0;
}
return 1;
}
int main()
{
    int num ;
    printf("Please Enter A Number\n");
    scanf("%d",&num);
    if(prime(num)){
        printf("Your Number Is prime\n");
    }
    else
    printf("Number Is Not Prime");

    return 0;
}