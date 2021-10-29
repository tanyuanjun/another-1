#include<stdio.h>
#include<math.h>
int main()
{
    double r,p,n;
    r=0.07;
    printf("please input a number for year:");
    scanf("%lf",&n);
    p=pow(1+r,n);
    printf("the growth rate is%3.5f",p);
    return 0;
}
