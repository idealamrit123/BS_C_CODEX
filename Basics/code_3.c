#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int start,End,limit;
    printf("Enter The Number to print table of your desired number\n");
    scanf("%d",&start);
    printf("Enter The Last Table you want\n");
    scanf("%d",&End);
    printf("Enter The Limit from where you want the table\n");
    scanf("%d",&limit);
    for(int i = start; i <= End ; i++){
        
        printf("\n || --- Table of %d --- ||\n",i);
        for(int a = 1 ; a <= limit ; a++){
            printf("%d * %d = %d \n",i,a,i*a);
        }
    }

    return 0;
}