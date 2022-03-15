#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,k,limit =4,l,n=3;

    for(i=1;i<=limit;i++){
        for(j=1;j<=i*2;j++){
            printf("*");

          
        }printf("\n");
         if(i==3){
            n=n+4;
        }
         for(k=1;k<=n;k++){
            printf("*\n");

        }
         n=n-2;
       
  
    }}
     