#include<stdio.h>
#include<math.h>
#define FAILED -1
#define NUMBER 4
double power(double x,int n)           //�ݺ������ÿ�����
{
    int i;
    double tem=1.0;
    for(i=1;i<=n;i++)
    {
        tem=tem*x;
    }
    return tem;
}
double diff(double a,double b)             //�������Ĳ�ֵ���ÿ�����
{
    return(a>b)?a-b:b-a;
}
void set_zero(int v[],int n)              //��������ͳһ��һ����������
{
    int i;
    for(i=0;i<n;i++)
    {
        v[i]=0;                            //���0���Ըĵ��
    }
}
int min_of(const int v[],int n)           //�ж�������ֵ������
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
void reverse_intary(int v[],int n)            //���鵹������
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
int search(int v[],int key,int n)        //��������Ѱ��Ԫ��
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
int search_idx(const int v[], int idx[],int key,int n)          //Ŀ�������������е�λ�������µ�����
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
void mat_mul(const int a[4][3],int b[3][4],int c[4][4])     //��������ĳ˻����γɵ�������
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
void function()       //�������ÿһ��Ԫ����ʱȷ��Ϊ���㳣��0.0
{
    static int i;
    double v[i];
     int a=6;
    for(i=0;i<a;i++)
    {
        v[i]=0.0;
    }
}
void put_count()          //���������������õĴ���
{
    static int n=1;
    printf("put_count:No.%d",n++);
}
void set_idx(int *v,int n)     //Ԫ�ظ���Ϊn��������Ԫ�ص�ֵ���±���ͬ
{
    int i;
    for(i=0;i<n;i++)
    {

        v[i]=i;
    }
}
void inv(int x[],int n)       //�������Ԫ�ص������е��ÿ����int������
{
    int tem,i,j,m=(n-1)/2;
    for(i=0;i<=m;i++)
    {
        tem=x[i];
        x[i]=x[n-1-i];
        x[n-1-i]=tem;
    }
}
void inv_1(int *x,int n)                   //�����Ԫ�ص�������ָ��
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
    puts("������������");
    printf("the first number is:");
    scanf("%lf",&x);
    printf("the second number is:");
    scanf("%d",&y);
     printf("the third number is:");
    scanf("%lf",&a);

    printf("%lf��%lf��%d���ݵĲ���%f.\n",x,a,y,diff(power(x,y),power(a,y)));
    return 0;
}
