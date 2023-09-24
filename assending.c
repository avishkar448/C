#include<stdio.h>
int main(){
    int a[100];
    int n,i,j,temp;

    printf("How many number you want :");
    scanf("%d",&n);
   
   printf("enter the %d number in array : \n",n);
    for(i=0 ; i<n ; ++i){
        printf("enter the number %d :",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;++i)
        for(j=i+1 ; j<n ; ++j){
            if(a[j]<a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    }

    printf("\n Element in assending order: \n");
    for(i=0 ;i<n; ++i){
        printf(" %d ",a[i]);

    }
    printf("\n\n");
}