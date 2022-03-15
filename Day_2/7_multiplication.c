#include <stdio.h>
#include <stdlib.h>

// Multiplication table upto 100

int main(void){
    int n,i;
    printf("Enter a number to show the multiplication Table of it ");
    scanf("%d",&n);
    for(i = 1; i <= 10; i++ ){
        printf("%d * %d = %d \n", n , i , n*i );
    }
    return 0;
}