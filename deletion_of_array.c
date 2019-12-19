#include<stdio.h>
#include<conio.h>
//#define Max 10;
int main()
{
    int a[10],i,pos,n;
    printf("Enter the no of elements in array:");
    scanf("%d",&n);
    printf("Enter the values of array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the position of that item to be deleted:");
    scanf("%d",&pos);
    for(i=pos;i<=n-1;i++)
        a[i-1]=a[i];
     //a[i+1]=item;
    n=n-1;
    printf("after deletion the array elements are:");
      for(i=0;i<n;i++)
        printf("\n%d",a[i]);
    return 0;
}
