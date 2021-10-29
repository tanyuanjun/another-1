#include<stdio.h>
int main()
{
    int a;
    printf("请输入一个整数：");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("%d",a);

    }
    else
    {
        printf("%d",-a);

    }
    return 0;
}
