#include<stdio.h>
#include<math.h>
int calculate(int,int,int,int,int,int*,float*,float*);
int main()
{
    int a,b,c,d,e,sum;
    float avg,sd;
    printf("Enter the 5 no.=");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    calculate(a,b,c,d,e,&sum,&avg,&sd);
    printf("sum=%d\t,average=%f\t,std.deviation=%f",sum,avg,sd);
    return 0;
}
int calculate(int a, int b, int c,int d, int e,int *sum,float *avg,float *sd)

{
    *sum=a+b+c+d+e;
    *avg=*sum/5.0;
    //*sd=sqrt(pow((a-avg),2)+pow((b-avg),2)+pow((c-avg),2)+pow((d-avg),2)+pow((e-avg),2));
}
