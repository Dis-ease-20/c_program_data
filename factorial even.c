#include<stdio.h>
int factorial1(int);
int main()
{
int number;
int factorial=1;
printf("\n enter a number to calculate factorial");
scanf("%d",&number);
printf("%d=%d\n",number,factorial1(number));
return 0;
}
int factorial1(int n)
{
int i;
int result=1;
for(i=1;i<=n;i++)
result=result*i;
return(result);
}

