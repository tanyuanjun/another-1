#include<stdio.h>
int main()
{
    printf("请注意，输入的数是四位数，当输入-1时结束输入！\n");
    int a=0,i,n;
    printf("please input how many numbers in ararry:");
    scanf("%d",&n);
    int v[n];
    int t[n];
    int tem,p1,p2,p3,p4;
    int q=0,flag=0;
    for(i=0;i<n;i++)
    {
        printf("please input a number:");
        scanf("%d",&v[i]);
        if(v[i]<1000)
        {
            break;
        }
        if(v[i]>=10000)
        {
            break;
        }
        if(v[i]==-1)
        {
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        tem=0;
        p1=0;p2=0;p3=0;p4=0;
        tem=v[i];
        p1=tem/1000;
        tem=tem-(p1*1000);
        p2=tem/100;
        tem=tem-(p2*100);
        p3=tem/10;
        tem=tem-(p4*10);
        p4=tem;
        if(p1%2==0&&p2%2==0&&p3%2==0&&p4%2==0)
            {
                t[q++]=v[i];
                flag=flag+1;
            }

    }
    for(i=0;i<flag;i++)
    {
       for(int j=0;j<n&&(j+1)<n;j++)
       {
               if(t[j]<t[j+1])
               {
                a=t[j];
               t[j]=t[j+1];
               t[j+1]=a;
               }
       }
    }
    for(i=0;i<flag;i++)
    {
            printf("%d\n",t[i]);
    }
    return 0;

}
