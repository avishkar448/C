#include<stdio.h>
void checkprime();

int main(){
    

    checkprime();
    return 0;

}

void checkprime(){
    int i,n,flag=0;
     
     printf("Enter the no. do you want to check");
    scanf(" %d ",&n);

    if(n==0 || n==1){
        flag=1;
    }
    for(i=2; i<=n/2; ++i){
        if(n%i==0){
            flag=1;
            break;
        }
    }
   if(flag==1)
       printf(" %d no. is prime",n);
   
   else
       printf("%d  no. is not prime",n);
     
}