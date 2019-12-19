/*if a four-digit no. is input through the keyboard ,write  a  program to obtain the sum
of the first and last digit of this number*/
#include<stdio.h>
int main()
{
    int f,l,n,sum;
    printf("\nEnter the 4-digit no=");
    scanf("%d",&n);
    l=n%10;
    f=n/1000;
    sum=l+f;
    printf("\n4-digit no. is=%d\n",n);
    printf("\nSum of first and last digit no. is=%d\n",sum);
    return 0;

}
