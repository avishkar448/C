#include<stdio.h>
int main(){
    int marks[10],i,n,sum=0,average;

    printf("Enter number of element :");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("enter number %d: ",i+1);
        scanf("%d",&marks[i]);

        sum +=marks[i];
    }
    average=sum/n;
    printf("average = %5d",average);

    return 0;
}