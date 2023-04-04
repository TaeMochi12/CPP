#include<stdio.h>
int main(){
    int matrix1[10][10],matrix2[10][10],diffofmatrix[10][10];
    printf("Enter first 3*3 matrix:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\n Enter second 3*3 matrix:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&matrix2[i][j]);
      }

    }
    printf("\n difference of both matrix is:");
    for(int i=0;i<3;i++)
    {
for(int j=0;j<3;j++)
{
    diffofmatrix[i][j]=matrix1[i][j]-matrix2[i][j];
    printf("%5d",diffofmatrix[i][j]);
}
printf("\n");
    }
    return 0;
}
