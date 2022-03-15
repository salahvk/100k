#include <stdio.h>
#include <stdlib.h>

int main(){
    int limit,i;
    printf("Enter the limit to which you want to find prime numbers");
    scanf("%d",&limit);
    for(i=0;i<=limit; i++){
        if(primeNumbers(i)){
        printf("%d  ",i);
        }
    }
}

int primeNumbers(int num){
   if(num<2){
      return 0;
   }
   else{
        int x=num/2;
        for(int i=2;i<=x; i++){
            if(num%i==0){
              return 0;
            }
        }
   }
   return 1;
}