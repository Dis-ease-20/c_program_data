/* same as prog day 2.1, but without using third variable and use arithmetic operator except (+ and -) .*/


#include<stdio.h>
#include<conio.h>
int main()
{
    int c, d;
    printf("enter the value of c\nd\n");
    scanf("%d%d",&c,&d);
    printf("value of c and d before interchange\n");
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    c=c*d;
    d=c/d;
    c=c/d;
    printf("value of c and d after interchange\n");
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    return 0;
}
