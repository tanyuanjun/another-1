#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double x1,x2,i;
    printf("please input three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    i=b*b-4*a*c;
    if(i>=0)
        {
    x1=(-b+sqrt(i))/(2*a);
    x2=(-b-sqrt(i))/(2*a);
    printf("x1=%.15f\nx2=%.15f",x1,x2);
    }
    else
       {
           printf("此方程无实根");
       }
       return 0;

}
