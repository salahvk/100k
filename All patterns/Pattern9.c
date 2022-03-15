#include <stdlib.h>
#include <stdio.h>

int main(void){
    int i,j,k,z=3,m;
    for(i=1;i<=z;i++){
        for(m=1;m<=i*3;m++){
        for(k=1;k<=3*i;k++){
                printf("*");
            }
        }
            printf("\n");
        if(i<3){
          for(j=1;j<=3;j++){
              printf("*");
               printf("\n");
               
          }
         
        }
    }
}