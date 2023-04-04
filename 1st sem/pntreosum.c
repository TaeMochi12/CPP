#include<stdio.h>

int main(){
    int i;
    int even_sum=0;
    int odd_sum=0;
    int *p;
    p=&i;
    for(i=1;i<=50;i++)
    {
        if((i)%2==0)
        {
            even_sum=even_sum+(*p);
        }
        else
        {
            odd_sum=odd_sum+(*p);
        }
    }
    printf("Sum of even numbers is %d\n",even_sum);
    printf("Sum of odd numbers is %d\n",odd_sum);
    return 0 ;
}