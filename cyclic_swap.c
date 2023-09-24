#include<stdio.h>
void cyclicswap(int *a,int *b,int *c);

int main(){
    int a,b,c;
    
    printf("Enter the number:");
    scanf(" %d %d %d ",&a,&b,&c);

    printf("value before swapping :\n");
    printf("a= %d \nb= %d \nc= %d\n",a,b,c);
    
    cyclicswap(&a,&b,&c);

    printf("\n value after swapping :\n");
    printf("a= %d \nb= %d \nc= %d\n",a,b,c);

    return 0;
}

void cyclicswap(int *n1,int *n2,int *n3){
    int temp;

    temp=*n2;
    *n2=*n1;
    *n1=*n3;
    *n3=temp;
}