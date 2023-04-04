#include<stdio.h>

int main(){
    int l,b;
     printf("Enter the values of l and b\n");
    scanf("%d",&l);
    scanf("%d",&b);
    int *p,*p1;
    p=&l;
    p1=&b;
    int area=(*p)*(*p1);
    printf("Area of rectangle is %d",area);
    return 0 ;
}
