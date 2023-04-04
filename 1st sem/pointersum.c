#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the values of a and b\n");
    scanf("%d",&a);
    scanf("%d",&b);
    int *p,*p1;
    p=&a;
    p1=&b;
    int sum=*p+*p1;
    printf("Sum of a and b is %d",sum);
    return 0 ;
}