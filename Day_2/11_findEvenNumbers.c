#include <stdio.h>
#include <stdlib.h>

int main(void){

    int limit,i,a[100],flag,n,even=0;
    printf("Enter the size of an array ");
    scanf("%d",&limit);
    printf("Enter the values of array ");
    for( i = 1 ;i <= limit; i++){
        scanf("%d",&a[i]);
       }
    for( i = 1 ; i <= limit; i++){
         if( a[i]%2 == 0){
            even++;
        }
    }

    printf("Number of even numbers in the array is %d",even);
}