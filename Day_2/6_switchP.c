#include <stdio.h>
#include <stdlib.h>

int main(void){

 int choice;
    printf("Select a day to submit the Assignment \n1 for Sunday \n2 for Monday \n3 for Tuesday \n4 for wednesday \n5 for Thursday \n6 for Friday \n7 for saturday \nEnter your choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1 :
        printf("You have selected Sunday");
        break;

    case 2 :
        printf("You have selected Monday");
        break;

    case 3 :
        printf("You have selected Tuesday");
        break;

    case 4 :
        printf("You have selected Wednesday");
        break; 

    case 5 :
        printf("You have selected Thursday");
        break;  

    case 6 :
        printf("You have selected Friday");
        break; 

    case 7 :
        printf("You have selected saturday");
        break;                   
    
    default:
        printf("Invalid Entry");
        break;
    }
    return EXIT_SUCCESS;

}
