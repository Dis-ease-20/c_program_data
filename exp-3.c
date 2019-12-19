#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    printf("Enter the value of array=");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    sum=sum+a[i];
    printf("sum=%d",sum);
    return 0;

}
