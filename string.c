/*
#include<stdio.h>
int main(){
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s",name);
    return 0;
}*/
/*
#include<stdio.h>
int main(){
    char name[20];
    printf("enter name: ");
    scanf("%s",name);
    printf("NAME : ");
    puts(name);
    return 0;
}*/
//string passing to function
/*
#include<stdio.h>
void displaystring(char str[]);

int main(){
    char str[50];
    printf("enter the name: ");
    fgets(str,sizeof(str),stdin);
    displaystring(str);
    return 0;

}

void displaystring(char str[]){
    printf("NAME :");
    puts(str);
}*/
/*
#include<stdio.h>
#include<string.h>
int main(){
    //char avi[10]="AVISHKAR";
    char xx[10]={'A','V','I','S','H','K','A','R','A'};
    char xy[10];
    //printf("Length of string avi= %d\n",strlen(avi));
    //printf("Length of string xx= %d\n",strlen(xx));
  printf("The string xx: ");
  puts(xx);

  
   printf("The string xy : ");
   strcpy(xy,xx);
   puts(xy);
}*/
#include<stdio.h>
#include<string.h>
int main(){
    char x[]="avishkar",y[]="avishkar",c[]="ram",d[]="ganapati_bappa_morya";
    int res,res1;

    res=strcmp(x,y);
    printf("compare the x&y: %d\n",res);

    res1=strcmp(c,d);
    printf("compare the c&d: %d\n",res1);

    return 0;

}
