#include <stdio.h>
#include <stdlib.h>

int main (void){
    int n,i,limit,a[100],b[100],c[100];
  
    printf("Enter the size of arrays ");
    scanf("%d",&limit);
    printf("Enter the values of array 1 :");
    for(i = 1; i <= limit ; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the values of array 2 :");
    for(i = 1; i <= limit ; i++){
        scanf("%d",&b[i]);

        c[i] = a[i];
        a[i] = b[i];
        b[i] = c[i];

    }
    
    printf("Arrays after swapping :");
    printf("\nArray 1 :");
    for(i = 1; i <= limit ; i++){
        printf(" %d",a[i] );
    }

    printf("\nArray 2 :");
    for(i = 1; i <= limit ; i++){
        printf(" %d",b[i] );
    }
    
}