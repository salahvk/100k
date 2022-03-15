#include <stdio.h>
#include <stdlib.h>

int main(void){
    int P;
    float R,N,SI;
    printf("To find the interest Write down the amount ");
    scanf("%d",&P);
    printf("write the interest rate ");
    scanf("%f",&R);
    printf("Write the number of years ");
    scanf("%f",&N);
    
     SI=(P*R*N)/100;

     printf("Your Simple Interest is %f",SI);

    return EXIT_SUCCESS;
}