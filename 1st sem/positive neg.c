#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    switch(number>0){
        case 1: printf("Number is positive\n");
        break;
        case 0: if(number<0){
            printf("Number is negative\n");
            
        } else printf("Number is zero\n");
        break;
    }
    return 0;
}