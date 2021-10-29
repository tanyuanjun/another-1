#include<stdio.h>
int main()
{
    int A,B;
    printf("请输入两个整数A,B");
    scanf("%d %d",&A,&B);
    if(A/B==0)
    {
        printf("B是A的约数");
    }
    else
    {
        printf("B不是A的约数");
    }
    return 0;
}
