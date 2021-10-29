#include<stdio.h>
#include<math.h>
#define FAILED -1
#define NUMBER 4
double power(double x,int n)           //幂函数调用看这里
{
    int i;
    double tem=1.0;
    for(i=1;i<=n;i++)
    {
        tem=tem*x;
    }
    return tem;
}
double diff(double a,double b)             //两个数的差值调用看这里
{
    return(a>b)?a-b:b-a;
}
void set_zero(int v[],int n)              //数组生成统一的一个数看这里
{
    int i;
    for(i=0;i<n;i++)
    {
        v[i]=0;                            //这个0可以改的嗷
    }
}
int min_of(const int v[],int n)           //判断数组最值看这里
{
    int i;
    int min=v[0];
    for(i=0;i<n;i++)
    {
        if(v[0]<min)
            min=v[i];
    }
    return min;
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
int search(int v[],int key,int n)        //在数组中寻找元素
{
    int i=0;
    v[n]=key;
    while(1)
    {
        if(v[i]==key)
              break;
        i++;
    }
    return (i<n)?i:FAILED;

}
int search_idx(const int v[], int idx[],int key,int n)          //目标数字在数组中的位置生成新的数组
{
    int i,x;
    int j;
    for(i=0;i<n;i++)
    {
        printf("v[%d]",i);
        scanf("%d",v[i]);
    }
    printf("what key is you want:");
    scanf("%d",key);
    for(i=0;i<n;i++)
    {
        if(v[i]==key)
            {
                idx[j]=i;
                j++;
            }
        else
            ;
    }
    return j;
}
void mat_mul(const int a[4][3],int b[3][4],int c[4][4])     //两个数组的乘积所形成的新数组
{
    int i,j;
    for (i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
                c[i][i]=a[i][j]*b[k][i];
            printf("%d",c[i][i]);
        }putchar('\n');
    }

}
void function()       //把数组的每一个元素暂时确定为浮点常量0.0
{
    static int i;
    double v[i];
     int a=6;
    for(i=0;i<a;i++)
    {
        v[i]=0.0;
    }
}
void put_count()          //输出这个函数被调用的次数
{
    static int n=1;
    printf("put_count:No.%d",n++);
}
void set_idx(int *v,int n)     //元素个数为n的数组里元素的值和下标相同
{
    int i;
    for(i=0;i<n;i++)
    {

        v[i]=i;
    }
}
void inv(int x[],int n)       //数组里的元素倒序排列调用看这里（int变量）
{
    int tem,i,j,m=(n-1)/2;
    for(i=0;i<=m;i++)
    {
        tem=x[i];
        x[i]=x[n-1-i];
        x[n-1-i]=tem;
    }
}
void inv_1(int *x,int n)                   //数组的元素倒序排列指针
{
    int *i,*j,*k,tem,m=(n-1)/2;
    i=x;
    j=x+n-1;
    k=x+m;
    for(;i<=k;i++,j--)
    {
        tem=*i;
        *i=*j;
        *j=tem;
    }
}
int main ()
{
    double x,a;
    int n,y,b;
    puts("请输入三个数");
    printf("the first number is:");
    scanf("%lf",&x);
    printf("the second number is:");
    scanf("%d",&y);
     printf("the third number is:");
    scanf("%lf",&a);

    printf("%lf和%lf的%d次幂的差是%f.\n",x,a,y,diff(power(x,y),power(a,y)));
    return 0;
}
