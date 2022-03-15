#include <stdlib.h>
#include <stdio.h>

int main (void){

    int n,i,sum=0;
    printf("Enter the limit to find the sum of odd Numbers ");
    scanf("%d",&n);
    for( i=1 ; i <= n; i=i+2 ){
        sum = sum + i ;
    }
    printf("Sum of all odd numbers %d",sum);
}