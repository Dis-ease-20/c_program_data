#include<stdio.h>
int main()
{
    int i,n,otp;
    for(i=1;i<=10;i++)
    {
       printf("enter the working hour=");
       scanf("%d",&n);
        if( n>40)
        {
          otp=(n-40)*12;
          printf("overtime payment of %d employment=%d\n",i,otp);
        }
        else
        {
            otp=0;
            printf("overtime payment of %d employee is=%d\n",i,otp);
        }
    }
    return 0;
}
