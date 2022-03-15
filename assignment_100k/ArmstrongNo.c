#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num,x,result=0,rem;
    printf("Enter a three digit number whether to check it is armstrong or not");
    scanf("%d",&num);
    int onum=num;
    while (onum!=0)
    {
        rem = onum%10;
        result = result + (rem*rem*rem);
        onum=onum/10;
    }
    if(result == num){
        printf("%d is Armstrong number",num);
    }else{
      printf("%d is not an Armstrong number",num);
        }
    
}