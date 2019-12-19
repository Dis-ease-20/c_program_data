#include<stdio.h>
int main()
{
    char ch;
    printf("enter character=");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("%c is upper case");
    else if (ch>='a'&& ch<='z')
        printf("%c is lower case");
    else
        printf("%c is not a character");
    return 0;
}
