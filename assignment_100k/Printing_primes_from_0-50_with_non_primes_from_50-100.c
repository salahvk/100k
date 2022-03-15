#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j;
    for(i=1;i<50;i++){
       if(removePrime (i)){
           printf("%d ",i);
       }
    }
   for(j=51; j<100; j++){
     if(printPrime(j)){
         printf("%d ",j);
     }
   }
}

int removePrime(int num){
 
if(num < 2){
    return 0;
}else{
     int x=num/2;
    for(int i=2; i<=x; i++){
        if(num % i == 0 ){
           return 1;
        }
    }
}
return 0;
}

// Function to print primenumbers

int printPrime(int num2){
  
if(num2 < 50){
    return 0;
}else{
    int y=num2/2;
    for(int i=2; i<=y; i++){
        if(num2 % i == 0){
           return 0;
        }
    }
}
return 1;
}
