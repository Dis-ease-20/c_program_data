/*if the selling price of 15 items and the total profit earn on them is input through the keyboard ,
write the program to find the cost price of the item*/
#include<stdio.h>
int main()
{
    float cpi, sp ,p,cp;
    printf("Enter the selling price of 15 item=");
    scanf("%f",&sp);
    printf("\nEnter the profit=");
    scanf("%f",&p);
    cp=sp-p;
    cpi=cp/15;
    printf("\ncost price of 15 item is=%f\n",cp);
    printf("\ncost price of per item is=%f\n",cpi);
    return 0;
}
