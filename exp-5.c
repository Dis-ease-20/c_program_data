#include<stdio.h>
int main()
{
    int i,a,b,c;
    i=1;
    while(i<=500)
    {
        a=i%10;
        b=i%100;
        b=(b-a)/10;
        c=i/100;
        if((a*a*a+b*b*b+c*c*c)==i)
            printf("%d is a armstrong no.\n",i);
      i++;
    }

    return 0;
}
