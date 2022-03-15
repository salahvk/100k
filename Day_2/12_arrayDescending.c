#include <stdio.h>
#include <stdlib.h>

int main (void){

    int size,i,a[10],j,store;
    printf("Enter the size of an array ");
    scanf("%d",&size);
    printf("Enter the values of array ");
    for(i = 0; i < size;i++){
        scanf("%d",&a[i]);
    }

    for(i = 0; i < size-1; i++ ){
       for(j =i+ 1; j < size; j++){

         if ( a[i]< a[j] ){
             store = a[i];
             a[i] = a[j];
             a[j] = store;

         }
       }
    }

    printf("Numbers arranged in descending order are : ");

    for(i = 0; i < size ; i++){
        printf("%d\n",a[i]);
    }
}