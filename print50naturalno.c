#include<stdio.h>
int num(int n);
 
int main(int n){
     n=1;
    printf("The 100 natural no. are");
    num(n);
    return 0;
}
 
int num(int n){
    
    if(n<=100){
     printf(" %d\n ",n);
     num(n+1);
    }
}