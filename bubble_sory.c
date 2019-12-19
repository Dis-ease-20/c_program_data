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
    for(j=i+1;j<n;j++)
    {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("\nArray after sorting:");
for(i=0;i<n;i++)
printf("\t%d",a[i]);
return 0;
}
