//write a program to convert days into years , weeks and days(ignore leap year)
#include<stdio.h>
int main ()
{
    int ds,y,w,d;
    printf("Enter total no. of days=");
    scanf("%d",&ds);
    y=ds/365;
    ds=ds%365;
    w=ds/7;
    d=ds%7;
    printf("\nNo. of years=%d",y);
    printf("\nNo. of weeks=%d",w);
    printf("\nNo. of days=%d",d);
    return 0;
}
