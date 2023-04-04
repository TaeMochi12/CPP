#include <stdio.h>
int main()
{

    int arr[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int n = sizeof(arr) / sizeof(int);
    int start = 0;
    int end = n - 1;
    int ans;
    printf("Enter the element whose index is to be searched:");
    scanf("%d\n", &ans);
    
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == ans)
        {
            printf("%d is found at index %d", ans, mid);
            break;
        }
        else if (arr[mid] > ans)
        {
            end = mid - 1;
        }
        else if (arr[mid] < ans)
        {
            start = mid + 1;
        }
        else
            printf("NULL");

        mid  = (start + end ) /2 ;
    }

    return 0;
}