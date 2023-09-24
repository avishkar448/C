#include<stdio.h>
int even(int n);

int main(){
    int a,num;

    printf("enter the number");
    scanf(" %d ",&a);
    
    num=even(a); 

}
 int even(int n){
    
     if(n%2==0){
         printf("%d is even number ",n);
     }
     else{
         printf("%d is odd number ",n);
     }
 }