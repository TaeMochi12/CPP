#include<stdio.h>
int main(){
    int mat[3][3],i,j,mattrans[3][3];
    printf("enter 3*3 matrix elements:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&mat[i][j]);

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        mattrans[j][i]=mat[i][j];

    }
    printf("\nTranspose of given matrix is:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d",mattrans[i][j]);
        printf("\n");
    }
    return 0;
}
