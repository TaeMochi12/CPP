#include<stdio.h>
int main()
{
    int t,ld,m,n,sum;
    printf("Enter lower and upper limit: ");
    scanf("%d%d",&m,&n);
    printf("Armstrong numbers between %d and %d are:\n",m,n);
    for(int i=m;i<=n;i++)
    {
        t=i;
        sum=0;
        while(t>0)
        {
            ld=t%10;
            sum+=ld*ld*ld;
            t/=10;
        }
        if(sum==i)
        {
            printf("%d",i);
        }
    }
    return 0;
}