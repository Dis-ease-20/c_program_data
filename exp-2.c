#include<stdio.h>
int main()
{
    int i,f=1,n;
    printf("Enter the Number=");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
        f=f*i;
    printf("factorial of given no.%d is =%d",n,f);
  return 0;
}
