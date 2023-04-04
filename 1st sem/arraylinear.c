#include<stdio.h>
int main()
{
    int arr[8],n;
    printf("Enter the elements of Array: ");
    for(int i=0;i<8;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("Enter the element whose index is to be searched: ");
    scanf("%d",&n);
    for(int i=0;i<8;i++)
    {
        if(arr[i]==n)
        {
            printf("Index of %d is %d\n",n,i);
            
        }
        

    }

    return 0;
}