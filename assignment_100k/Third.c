#include <stdlib.h>
#include <stdio.h>

int main(void){
    int limit,i,a[20],j,temp;
    printf("Enter the size of arrays\n");
    scanf("%d",&limit);
    printf("Enter array values");
    for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The second smallest number of entered array is %d",a[1]);
}