#include<stdio.h>
int add(int a,int b);

int main(){
    int n1,n2,sum;

    printf("enter the 1st no");
    scanf("%d",&n1);

    printf("enter the 2nd no");
    scanf("%d",&n2);
     
     sum=add(n1,n2);
    return 0;
}
 int add(int a,int b){
    int  result=a+b;
     printf("addition of two number %d",result);

     return result;
 }