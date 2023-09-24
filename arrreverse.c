#include<stdio.h>

void main(){
    int i,n;
    int a1[100],a2[100];

     printf("how many number you want to print :");
     scanf(" %d ",&n);

     printf("input %d number in the array: \n",n);
      for(i=0;i<n;i++){
         printf("element- %d :" ,i+1);
         scanf("%d",&a1[i]);
     }
     for(i=0;i<n;i++){
         a2[i]=a1[i];
     }

     printf("\n the element store in the first array: \n");
     for(i=0;i<n;i++){
         printf("%5d",a1[i]);
     }

     printf("\n the element copied in second array: \n");
     for(i=0;i<n;i++){
         printf("%5d",a2[i]);
     }
     printf("\n\n");
}