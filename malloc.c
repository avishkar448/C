//program to calculate the sum of n number enter by the user
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,*ptr,sum=0;

    printf("How many number you want: ");
    scanf("%d",&n);

    ptr=(int*) malloc(n *sizeof(int ));

    if(ptr== NULL){
        printf("error!!!!!!");
       exit(0);
    }
    printf("enter the number : ");
    for(i=0;i<n;++i){
        scanf("%d",ptr+i);
        sum += *(ptr +i);

    }
    printf("Sum =%d",sum);

    free(ptr);

    return 0;
}