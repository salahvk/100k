#include <stdio.h>
#include <stdlib.h>

int main( ){
    int i,k,j,a[10],size=10;
   printf("Enter some values");
   for(i=0;i<size;i++){
   scanf("%d",&a[i]);
   }
   for(i=0;i<size;i++){
       if(a[i]%5==0){
           for(k=i;k<size;k++){
       
          a[k+1]=a[k+3];
          a[k+2]=a[k+4];

           }
        size-2;
       i-2;
       }
      
   }for(i=0;i<size;i++){ 
   printf("%d ",a[i]);
   }
}