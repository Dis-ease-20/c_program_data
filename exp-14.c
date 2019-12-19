#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    printf("Enter the digit=");
    scanf("%f",&a);
    if(a>0)
        printf("No. is positive");
    if(a==0)
        printf("Entered no. is zero");
    if(a<0)
        printf("No. is negative");
  return 0;
}
