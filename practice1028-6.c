#include<stdio.h>
void exchange(int *a1,int *a2,int *a3)
{
    if(*a1<*a2) swap(a1,a2);
    if(*a1<*a3) swap(a1,a3);
    if(*a2<*a3) swap(a2,a3);
}
void swap(int *p1,int*p2)
{
    int tem;
    tem=*p1;
    *p1=*p2;
    *p2=tem;
}
int main()
{
    int a,b,c,*t1,*t2,*t3;
    printf("please input three interge numbers:");
    scanf("%d,%d,%d",&a,&b,&c);
    t1=&a;
    t2=&b;
    t3=&c;
    exchange(t1,t2,t3);
    printf("the right order is%d,%d,%d\n",*t1,*t2,*t3);
    return 0;
}
