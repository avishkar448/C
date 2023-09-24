#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, *data;
   // float *data;
    printf("How many number you want : ");
    scanf("%d",&n);

    data=(int*)calloc(n,sizeof(int));
    if(data == NULL){
        printf("Error!!! memory not allocted");
        return 1;

    }

    for(int i=0;i<n;++i){
    printf("enter the number %d :",i+1);
    scanf("%d",data+i);
    }

    for(int i=1;i<n;++i){
        if(*data < *(data+i)){
            *data = *(data + i);
        }
    }

    printf("Largest number = %.2d :",*data);
     free(data);

     return 0;


}