#include<stdio.h>
int main(){
    int i, n;
    float a[100],sum=0, avg;

    printf("enter the number of element ");
    scanf("%d",&n);

    while(a[100]>n){
        printf("you can enter the value 1 to 100");
        printf("enter the number of element ");
        scanf("%d",&n);
    }
     for(i=0 ; i<n ; ++i){
         printf("%d enter the number :",i+1);
         scanf("%f", &a[i]);
         sum +=a[i];

     }
     avg =sum/n;
     printf("The average is: %.2f",avg);

     return 0;
}