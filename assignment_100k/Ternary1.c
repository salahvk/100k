#include <stdlib.h>
#include <stdio.h>

int main(void){
    int int1,int2,int3;
    printf("Enter Three numbers");

    scanf("%d%d%d",&int1,&int2,&int3);
   
    
    int temp=(( int1 < int2  ) ? int1 : int2 );
    int result = ( int3 < temp ? int3: temp);
    
    printf("The smallest number is %d",result);
    
    // getch();
    return 0;

}


