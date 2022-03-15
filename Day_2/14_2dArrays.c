#include <stdlib.h>
#include <stdio.h>

int main(void){

    int a,i,ar[100][100],br[100][100],j,sum[100][100];
    printf("Enter the size of arrays ");
    scanf("%d",&a);
    printf("Enter the value of array 1 :");
    for(i = 0; i < a; i++ ){
        for(j = 0 ; j < i ; j++){
           scanf("%d",&ar[i][j]);
        }
     
    }
    printf("Enter the values of array 2 :");
    for(i = 0; i < a; i++){
         for(j = 0 ; j < i ; j++){
        scanf("%d",&br[i][j]);
    }
    }
     
    for( i=0 ; i < a ; i++ ){
         printf("%d\n",ar[i][j]+br[i][j]);
    }

    return EXIT_SUCCESS;
}