#include <stdio.h>
#include <stdlib.h>

int main(void){

  float mark;
   
  printf("Write down Your mark obtained in Examination");
  scanf("%f",&mark);

  if(mark >= 90 ){
      printf("Your Grade is A");
  }else if(mark <= 89 && mark >= 80){
      printf("Your Grade is B");
  }else if(mark <= 79 && mark >= 70){
      printf("Your Grade is C");
  }else if(mark <= 69 && mark >= 60){
      printf("Your Grade is D");
  }else if(mark <= 59 && mark >= 50){
      printf("Your Grade is E");
  }else if(mark < 50 ){
      printf("Fool ! Your Failed");
  }

    return EXIT_SUCCESS;
}
