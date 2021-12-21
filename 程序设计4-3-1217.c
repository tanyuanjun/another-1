#include<stdio.h>
int main()
{
    int a[10];
    int c[10]={0};
    int d[10]={0};
    int flag=0,j=0;
    int max1,max2;
    for(int i=0;i<10;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(a[i]%2!=0)
        {
            c[++j]=a[i];
        }
    }
    j=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            d[++j]=a[i];
        }
    }
    for(int i=0;i<10;i++)
    {
        for(j=1;(j+i)<10;j++)
        if(c[i+j]<c[i])
        {
            flag=c[i];
           c[i]=c[i+j];
           c[i+j]=flag;

        }
    }
     for(int i=0;i<10;i++)
    {
        for(j=1;(j+i)<10;j++)
        if(d[i+j]<d[i])
        {
            flag=d[i];
           d[i]=d[i+j];
           d[i+j]=flag;

        }
    }
    for(int i=0;i<10;i++)
    {
        if(c[i]==0)
            ;
        else
        printf("%3d",c[i]);

    }
     for(int i=0;i<10;i++)
    {
        if(d[i]==0)
            ;
        else
        printf("%3d",d[i]);

    }
    return 0;


}
