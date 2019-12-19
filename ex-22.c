//program to calculate the simple interest
#include<stdio.h>
int main()
{
    float p,t,r,s;
    printf("Enter the principle,rate and time=");
    scanf("%f%f%f",&p,&r,&t);
    s=(p*r*t)/100;
    printf("\nPrinciple=%f",p);
    printf("\nTime=%f",t);
    printf("\nRate=%f",r);
    printf("\nSIMPLE INTEREST=%f\n",s);
    return 0;
}
