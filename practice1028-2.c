#include<stdio.h>
void ary_set(int v[],int n,int val)
{
    int i;
    for(i=0;i<n;i++)
    {
        v[i]=val;
    }
}
int main ()
{
    int a[2];

    int n=2;
    int val=99;
    ary_set(a,2,99);
    for(int i=0;i<2;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}
