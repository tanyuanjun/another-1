#include<stdio.h>
void set_idx(int *v,int n)
{
    int i;
    for(i=0;i<n;i++)
    {

        v[i]=i;
    }
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int n;
    printf("how many elements in ary you want:");
    scanf("%d",&n);
    set_idx(&a,n);
    for(int i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);

    }
    return 0;
}
