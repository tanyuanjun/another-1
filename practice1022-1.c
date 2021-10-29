#include<stdio.h>
#define NUMBER 7
int main( )
{
    int i;
    int v[NUMBER];

    for(i=0;i<NUMBER;i++)
    {
        printf("v[%d]=",i);
        scanf("%d",&v[i]);

    }
    printf("这个数组反过来是：\n");
    reverse_intary(v,NUMBER);
    return 0;

}
void reverse_intary(int v[],int n)            //数组倒序看这里
{
    int i;
    if(n%2)
        ;
    else
        n=n-1;

    for(i=0;i<(n/2);i++)
    {
        int tem=v[i];
        v[i]=v[n-1-i];
        v[n-1-i]=tem;

    }
    for(i=0;i<NUMBER;i++)
        printf("v[%d]=%d\n",i,v[i]);
}
