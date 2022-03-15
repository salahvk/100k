#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,k=0;
    for(i=1; i<=5; i++ ,k=0){
        for(j=i; j<=9-i;j++){
            printf(" ");
           
        }
        
      
        while(k != (2*i)-1){
            printf("* ");
            k++;
           
        }
       printf("\n");
    }
     
}