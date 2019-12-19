/*if 5 digit no. is input through keyboard,write the program to reverse  the number*/
#include<stdio.h>
int main()
{
    int n,n1,a,b,c,d,e,rev;
    printf("Enter the 5-digit no.=");
    scanf("%d",&n);
    n1=n;
    a=n1%10;
    n1=n1/10;
    b=n1%10;
    n1=n1/10;
    c=n1%10;
    n1=n1/10;
    d=n1%10;
    n1=n1/10;
    e=n1%10;
    n1=n1/10;
    rev=(a*10000)+(b*1000)+(c*100)+(d*10)+e;
    printf("\nYour 5- digit no. is=%d\n",n);
    printf("\nReverse value is=%d\n\n",rev);
   return 0;
}
