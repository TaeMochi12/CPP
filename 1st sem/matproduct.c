#include<stdio.h>
#include<math.h>
void main()
{
    int mat1[2][2];
    int mat2[2][3];
    int i,j,k;
    int c[i][j];
    
    printf("Enter the elements of 1st matrix:\n");
    for(i=0;i<2;i++)
    {
        
        for( j=0;j<2;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix:\n");
    for( i=0;i<2;i++)
    {
        for( j=0;j<3;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for( i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=0;
            for(k=0;k<2;k++)
            {
                c[i][j]=c[i][j]+(mat1[i][k]*mat2[k][j]);
            }
        }
    }
    printf("Product of matrices is\n" );
    for( i=0;i<2;i++)
    {
        for( j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
}