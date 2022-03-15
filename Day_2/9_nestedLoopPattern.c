#include <stdio.h>
#include <stdlib.h>

int main (void){

    int i,limit = 5,p ;
    for( i = 1; i <= limit; i++){
        for( p = 1 ; p <= i; p++){
            printf("%d ",p);
        }
        printf("\n");
    }
}