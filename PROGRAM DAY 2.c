/*the length and breadth of a rectangle and radius of a circle are input through the keyboard. write a program to calculate the area and parameter of the rectangle and the area and the circumference of the circle.*/

#include<stdio.h>
int main()
{
    int l, b, rarea, rperi;
    float r, carea, circum;
    printf("enter the value of l=");
    scanf("%d",&l);
    printf("enter the value of b=");
    scanf("%d",&b);
    printf("enter the value of r=");
    scanf("%f",&r);
    //printf("enter the value of rarea=");
    //scanf("rarea=%d",&rarea);
    carea= 3.14*r*r;
    rperi= 2*(l+b);
    rarea= l*b;
    circum= 2*3.14*r;
    printf("rarea=%d",rarea);
    printf("rperi=%d",rperi);
    printf("carea=%f",carea);
    printf("circum=%f",circum);
    return 0;
}
