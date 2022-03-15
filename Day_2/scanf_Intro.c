#include <stdlib.h>
#include <stdio.h>

int main(void){
    int number1;
    float number2,sum;
    printf("Enter two numbers ");
    scanf("%d%f",&number1,&number2);
    sum = number1 + number2;
    printf("Sum of Two numbers is %f",sum);
    return EXIT_SUCCESS;
}