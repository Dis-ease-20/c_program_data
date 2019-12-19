//write a program to enter two angles of a triangle and find 3 angle
#include<stdio.h>
int main ()
{ int a,b,c;
printf("Enter the 2 angles of triangles=");
scanf("%d%d",&a,&b);
c=360-(a+b);
printf("Third angles is=%d",c);
return 0;

}
