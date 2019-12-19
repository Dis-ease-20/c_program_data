#include<stdio.h>
#include<math.h>
int main()
{
     int a;
    printf("Enter the digit=");
    scanf("%d",&a);
    if((a%5==0)&&(a%11==0))
        printf("No. is divisible by 5 and 11");
     else
        printf("No. is not divisible by 5 and 11");
  return 0;
}

