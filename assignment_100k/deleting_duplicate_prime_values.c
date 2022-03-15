// sum of unique primenumbers in an array

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10],i,j,limit=10;
    printf("Enter some numbers in to array\n");
    for(i=0; i<=limit; i++){
    scanf("%d",&a[i]);
    }
    printf("Entered prime numbers are ");
     for(i=0; i<=limit; i++){
            if(printPrime(a[i])){
                printf("%d ",a[i]);
            }
     }
     //deleting duplicate prime values in array
     for(i=0; i<limit-1;i++){
         for(j=i+1; j<limit;j++){
             if(a[i]==a[j]){
                 int k;
                 for(k=j;k<limit;k++){
                     a[k]=a[k+1];
                 }
                limit--;
                j--; 
             }
         }
     }
     printf("\n%d",a[i]);
}

int printPrime(int num){
  
  
if(num >0){
    int y=num/2;
    for(int i=2; i<=y; i++){
        if(num % i == 0){
           return 0;
        }
    }
}
return 1;
}
