/*two numbers are input through the keyboard into two locations C and D.write a program to interchange the contents of C and D.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int c, d, temp;
    printf("enter the value of c\nd\n");
    scanf("%d%d",&c,&d);
    printf("value of c and d before interchange\n");
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    temp=c;
    c=d;
    d=temp;
    printf("value of c and d after interchange\n");
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    return 0;
}
