/*a cashier has currency notes of denominations 10,50 and 100.if the amount to be withdrawn is input through
the keyboard in hundreds ,find the total number of currency notes of each denominations the cashier will have to
give to the withdrawer*/
#include<stdio.h>
int main()
{

int amt,noh,nof,not;
printf("Enter the amount to be withdrawn=");
scanf("%d",&amt);
noh=amt/100;
amt=amt%100;
nof=amt/50;
amt=amt%50;
not=amt/10;
printf("\nNo. of hundred=%d",noh);
printf("\nNo. of fifty=%d",nof);
printf("\nNo. of tens=%d",not);
return 0;


}
