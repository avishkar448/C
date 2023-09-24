#include<stdio.h>
float temp(float mass);

int main(){
    int a;
    printf("enter the value a");
    scanf("%d",&a);
    printf("the value of temp %f :-",temp(a));

    return 0;
}

float temp( float mass ){
    float result= mass *9.8;
    return result;
}