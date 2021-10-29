#include<stdio.h>
#include<math.h>
int main()
{
     double p,p1,p2,p3,p4,p5, r1,r2,r3,r4,r5,n;
     n=2000;
     r1=0.015;
     r2=0.021;
     r3=0.0275;
     r4=0.03;
     r5=0.0035;
     printf("please input a number as your gross:");
     scanf("%d",&n);
     p1=n*(1+5*r1);
     p2=n*(1+2*r2)*(1+3*r3);
     p3=n*(1+3*r3)*(1+2*r2);
     p4=n*pow((1+r1),5);
     p5=n*pow(1+r5/4,4*5);

     printf("p1=%f\n",p1);
     printf("p2=%f\n",p2);
     printf("p3=%f\n",p3);
     printf("p4=%f\n",p4);
     printf("p5=%f\n",p5);
     return 0;


}
