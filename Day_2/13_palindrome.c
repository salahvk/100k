
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){
    
	int i,flag=0;
	char a[100];
	
	printf("Enter a string ");
	scanf("%s",&a);
    int length =strlen(a);

	for( i=0 ;i < length; i++){
        if(a[i] != (a[length -i-1])){
			
			flag = 1;
			break;
			
			
	   		
		}
		 
		}
		if(flag == 1){
		printf("It is not palindrome ");
	}else{
			printf("It is palindrome ");

	}
    
	return EXIT_SUCCESS;
}
