#include<stdio.h>
#include<math.h>
int main ()
{
    double d, p,r,m;
    r=0.01;
    printf("please input your loan(d):");
     scanf("%lf",&d);
    printf("please set a year to pay it back(p):\n");
    scanf("%lf",&p);

    m=log10(p/(p-d*r))/log10(1+r);
    printf("m=%7.2f\n",m);
    return 0;
}
