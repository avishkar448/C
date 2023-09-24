#include<stdio.h>
int count( int n1);

int main(){
    int n1,cnt;

    printf("enter the number ");
    scanf("%d",&n1);

    cnt=count(n1);
    printf("sum of this numbers %d",cnt);
}

int count(int n1){
    static int cnt=0;
    if(n1!=0){
        cnt++;
       count(n1/10);
    }
    return cnt;
}