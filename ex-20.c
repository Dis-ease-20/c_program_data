//write a program to calculate the area of an equilateral triangle
#include<stdio.h>
#include<math.h>
int main()
{
    float a,s;
    printf("Enter the side of an equilateral triangle=");
    scanf("%f",&s);
    a=sqrt(3)/4*s*s;
    printf("\nSide of an equilateral triangle is=%f",s);
    printf("\narea of an the triangle is =%f\n",a);
    return 0;

}
