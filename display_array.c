/*
#include<stdio.h>
int main(){
    int a[3][3][3];
    int i,j,k;
     
     for(i=0;i<3;++i)
        for(j=0;j<3;++j)
           for(k=0;k<3;++k){
               printf("enter the values :");
               scanf("%d",&a[i][j][k]);
           }
       
       printf("Display the value:\n");
       for(i=0;i<3;++i)
        for(j=0;j<3;++j)
           for(k=0;k<3;++k){
               printf("values[%d][%d][%d]= %d\n",i,j,k,a[i][j][k]);
           }
    return 0;

}*/
/*
#include<stdio.h>
float sum(float num[]);

int main(){
    float result,num[]={2,5,7,3,9,10};

    result=sum(num);
    printf("result= %.2f",result);
    return 0;
}

float sum(float num[]){
    float sum=0;

    for(int i=0;i<6;++i){
      sum+=num[i];
    }
    return sum;
}*/

#include<stdio.h>
void display(int num[2][2]);

int main(){
    int num[2][2];

    printf("Enter the number :\n");
    for(int i=0;i<2;++i){
        for(int j=0;j<2;++j){
            // printf("Enter the number :");
            scanf("%d",&num[i][j]);
        }
    }
    display(num);
}
void display(int num[2][2]){
    
    printf("display the number ");
    for(int i=0;i<2;++i){
        for(int j=0;j<2;++j){
            printf("%d\n",num[i][j]);
        }
    }
}