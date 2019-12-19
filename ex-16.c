//write a C program to find power of any number x^y
#include<stdio.h>
#include<math.h>>
int main()
{
    int x,y,power;
    printf("Enter the value of x and y=");
    scanf("%d%d",&x,&y);
    power=pow(x,y);
    printf("power of %d^%d=%d",x,y,power);
    return 0;
}

