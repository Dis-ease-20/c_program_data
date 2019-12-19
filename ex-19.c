//write a program to enter base and height of a triangles and find its area
#include<stdio.h>
int main()
{ float h,b,a;
printf("Enter the base and height of a triangle=");
scanf("%f%f",&h,&b);
a=(0.5)*b*h;
printf("\nHeight of triangle is=%f",h);
printf("\nBase of a triangle is=%f",b);
printf("\nArea of a triangle is=%f",a);
return 0;

}
