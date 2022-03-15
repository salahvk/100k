#include <stdlib.h>
#include <stdio.h>

int main(void){
    int limit,i,j,k,a[20];
    printf("Enter the size of arrays\n");
    scanf("%d",&limit);
    printf("Enter array values");
    for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
    }
    
    for(i=0;i<limit-1;i++){
        for(j=i+1; j<limit; j++){
            if(a[j]==a[i]){
                for( k= j; k<limit; k++){
                   a[k]=a[k+1];
                }
                limit--;
                j--;
            }
            
        }
    }
    printf("Numbers in the array after deletion of duplicates are ");
    for(i=0; i<limit; i++){
       printf("%d\n",a[i]);
    }}