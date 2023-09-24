//finding the address
/*
#include<stdio.h>
int main(){
    int var= 4565436;
    printf("var :%d\n",var);

    printf("address of var : %p",var);

}*/
/*
#include<stdio.h>
int main(){
    int *var,a;
    a= 123;
    *var= a;

    printf("the address of a :%d\n",*var);
    //printf("the address of a :%d\n",var);
    printf("the address of a :%d\n",a);
    
    return 0;

}*/
/*
#include<stdio.h>
int main(){
    int x[4], i;

    for(i=0; i<5;++i){
        printf("x[%d] =%p\n",i,&x[i]);
    }
    printf("Address of array x: %p",x);
}*/
/*
 #include<stdio.h>
 int main(){
     int x[10]={1,2,3,4,5};
     int *ptr;

     ptr= &x[10];

     printf("ptr: %d\n",*(ptr));
     printf("ptr+1 :%d\n",*(ptr+1));
     printf("ptr-1 :%d\n",*(ptr-1));

     return 0;
 }*/
/*
#include<stdio.h>
void swap(int *a,int *b);

int main(){
    int n1=79, n2=45;

    swap(&n1,&n2);
    printf("number 1:%d\n",n1);
    printf("number 2:%d\n",n2);

    return 0;
}

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}*/
//passing pointer to function
#include<stdio.h>
void function(int *ptr){
    (*ptr);
}

int main(){
    int *p, i=100;
    p=&i;
    function(p);
    
    printf("address of p: %d",*p);
    return 0;
}

