#include<stdio.h>
int sumofrange(int n1);

int main(){
    int n1,sum;

    printf("the last no of range");
    scanf("&d",&n1);

    sum=sumofrange(n1);

    printf("\n sum of the no. from 1 to %d is: %d",n1,sum);
    return 0;
}

int sumofrange(int n1){
    int result;

    if(n1==1){
        return 1;
    }
    else{
        result= n1 + sumofrange(n1-1);
    }
    return result;
}