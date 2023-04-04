#include<stdio.h>
int main()
{
    int n;
    int arr[n];
    printf("Enter the number of elements of Array: ");
    scanf("%d",&n);
    printf("Enter the elements of the Array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    int start=0;
    int end=n-1;
    int ans;
    printf("Enter the element whose index is to be searched:");
    scanf("%d\n",&ans);
    while(start<=end)
    {
        int mid=(start+(end-start))/2;
        if(arr[mid]==ans)
        {
            printf("%d is found at index %d",ans,mid);
        }
        else if(arr[mid]>ans){
            end=mid-1;
        }
        else if(arr[mid]<ans){
            start=mid+1;
        }
        else{
            printf("Element not found\n");
        }
    }

     return 0;
}