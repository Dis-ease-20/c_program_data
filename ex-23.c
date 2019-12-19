//program to calculate compound interest for 1 yr
#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,ci,x;
    printf("Enter the principle,rate and time=");
    scanf("%f%f%f",&p,&r,&t);
    x=p*(1+(r/100));
    ci=pow(x,t);
    printf("\nPrinciple=%f",p);
    printf("\nRate=%f",r);
    printf("\ntime=%f",t);
    printf("\n\nCOMPOUND INTEREST%f^\%f=%f\n",x,t,ci);
    return 0;
}
