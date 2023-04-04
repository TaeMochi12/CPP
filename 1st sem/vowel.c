#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter to check if it is a vowel or consonant: ");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    { switch(ch){
        case 'a':printf("Its a vowel\n");
        break;
        case 'e':printf("Its a vowel\n");
        break;
        case 'i':printf("Its a vowel\n");
        break;
        case 'o':printf("Its a vowel\n");
        break;
        case 'u':printf("Its a vowel\n");
        break;
        case 'A':printf("Its a vowel\n");
        break;
        case 'E':printf("Its a vowel\n");
        break;
        case 'I':printf("Its a vowel\n");
        break;
        case 'O':printf("Its a vowel\n");
        break;
        case 'U':printf("Its a vowel\n");
        break;
        default: printf("Its a consonant\n");

    }
    

    }
    else printf("Not an english letter\n");
    return 0;
    }