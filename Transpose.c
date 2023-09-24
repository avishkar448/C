#include<stdio.h>
int main(){
    int a[10][10],trans[10][10],x,y;
    printf("Enter the number of rows and column: ");
    scanf("%d %d",&x,&y);
  
    printf("\n Enter matrix element:\n");
    for(int i=0; i<x; ++i)
      for(int j=0; j<y; ++j){
          printf("enter the element a%d%d: ",i+1,j+1);
          scanf("%d",&a[i][j]);
      }

      printf("\n Entered matrix \n");
      for(int i=0; i<x; ++i)
      for(int j=0; j<y; ++j){
          printf(" %d ",a[i][j]);
         if(j== x-1)
          printf("\n");
          
      }
    
    for(int i=0; i<x; ++i)
      for(int j=0; j<y; ++j){
        trans[j][i]=a[i][j];
      }
     
    printf("\n The transpose matrix is:\n");
    for(int i=0; i<x; ++i)
      for(int j=0; j<y; ++j){
          printf("%d ",trans[i][j]);
         if(j==y-1)
          printf("\n");

      }
      return 0;
}