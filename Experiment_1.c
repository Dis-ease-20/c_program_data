/*Ramesh's basic salary is input through the keyboard. His dearness allowance is 40%of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    float bs,da,hra,gs;
    printf("enter basic salary of Ramesh=");
    scanf("%f",&bs);
    da= bs*0.4;
    hra= bs*0.2;
    gs= bs+da+hra;
    printf("basic salary=%f\n",bs);
    printf("da=%f\n",da);
    printf("hra=%f\n",hra);
    printf("gross salary=%f\n",gs);
    return 0;
}
