#include<stdio.h>
#define MAX 10
int main()
{
int a[MAX],i,j,temp,n;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Array before sorting:");
for(i=0;i<n;i++)
printf("\t%d",a[i]);
for(i=0;i<n-1;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(a[j]<a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
printf("\nArray after sorting:");
for(i=0;i<n;i++)
printf("\t%d",a[i]);
return 0;
}

