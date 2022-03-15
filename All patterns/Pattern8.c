#include <stdlib.h>
#include <stdio.h>

int n=10,i,j,z=5,l,k;
int main(void){
    for(i=1;i<=5;i++) {
		for(j=1;j<=10-(i*2)-1;j++) {
         	printf(" ");
		}
			
				
		for(k=1;k<=(i*2)-1;k++) {
			printf("*");
		}	
			
		printf("\n");
		
	}
}
