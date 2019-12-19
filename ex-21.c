//program to enter the marks of 5 subjects and calculate the total, average ,and percentage
#include<stdio.h>
int main()
{
    float a,b,c,d,e,s,ave,per;
    printf("Enter the marks of 5 subjects(out of 100)=");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    s=a+b+c+d+e;
    ave=s/5;
    per=(s/500)*100;
    printf("\nSum of marks=%f",s);
    printf("\nAverage of marks=%f",ave);
    printf("\nPercentage(%)=%.2f%% \n",per);
    return 0;
}
