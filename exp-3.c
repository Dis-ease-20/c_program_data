#include<stdio.h>
int main()
{
    int i,p,a,b;
    p=1;
    printf("Enter the value of a and b=");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
        p=p*a;
    printf("%d^%d=%d",a,b,p);
    return 0;

}
