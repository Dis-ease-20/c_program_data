#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch1,ch;
    printf("Enter the character=");
    scanf("%c",&ch1);
    ch=tolower(ch1);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("%c is vowel",ch);
    else
        printf("%c is a consonant",ch);
    return 0;
}
