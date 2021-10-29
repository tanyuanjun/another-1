#include<stdio.h>
#define NUMBER 7
int main(  )
{
     int i;
     int x[NUMBER];                 //[]内的值为7，代表这个数组一共有七个元素
     for(i=0;i<7;i++)
     {
         printf("x[%d]:",i);            //显示的是x[0]
         scanf("%d",&x[i]);            //给生成的赋一个值
     }
     for(i=0;i<3;i++)
     {
         int temp=x[i];
         x[i]=x[6-i];
         x[6-i]=temp;
     }
     puts("顺序颠倒了");
     for(i=0;i<NUMBER;i++)
     {
         printf("x[%d]=%d\n",i,x[i]);
     }
     return 0;
}
