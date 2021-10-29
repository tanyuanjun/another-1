#include<stdio.h>
int main()
{
    int a,b,height,width,x,y;
    printf("please input a number:"); scanf("%d",&x);
    printf("please input a number:"); scanf("%d",&y);
    if(x>y)
    {
        width=x;
        height=y;
    }
    else
    {
        height=x;
        width=y;
    }
    for(a=1;a<=height;a++)
    {
        for(b=1;b<=width;b++)
             putchar('*');
        putchar('\n');
    }
    return 0;
}
