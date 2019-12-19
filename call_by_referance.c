#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter the value a and b:");
    scanf("%d%d",&a,&b);
    printf("Before swaping \tA=%d\n B=%d\n",a,b);
    swap(&a,&b);
    printf("after swaping \tA=%d\nB=%d",a,b);
    return 0;

}
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;

}
