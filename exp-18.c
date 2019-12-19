#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character=");
    scanf("%c",&ch);
    if(ch>=65&&ch<=97)
        printf("%c is character",ch);
    else if(ch>=97&&ch<=122)
        printf("%c is a character",ch);
    else
        printf("%c is not a character",ch);
    return 0;
}
