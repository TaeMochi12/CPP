#include<stdio.h>
int main()
{
    int sum=0;
    printf("All the numbers which are divisible by 5 between 100 and 200 are:\n");
    for(int i=101;i<200;i++)
    {
        if(i%5==0)
        {
            sum+=i;
            printf("%5d",i);
        }
    }
    printf("\nSum is %d\n",sum);
    return 0;
}