#include <stdlib.h>
#include <stdio.h>

int main(void){
    int limit,i,a[20],number,k=0;
    printf("Enter the size of arrays\n");
    scanf("%d",&limit);
    printf("Enter array values");
    for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
    }
    printf("Enter the element in which you want to find its frequency");
    scanf("%d",&number);
    
    for(i=0;i<limit;i++){
        if(a[i]==number){
            k++;
        }
       
    }
    printf("\nThe frequency of the number is %d",k);
}