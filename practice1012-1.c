#include<stdio.h>
int main()
{
    int a,b,i,max,min;
    int sum=0;
    printf("please input two numbers:\n");
    printf("a:");scanf("%d",&a);
    printf("b:");scanf("%d",&b);
    if(a>b)
    {
        max=a;
        min=b;

    }
    else
        {min=a;
        max=b;}
        i=min;
    do
    {
        sum=sum+i;
        i=i+1;
    } while (i<=max);
    printf("%d",sum);
    return 0;
}
