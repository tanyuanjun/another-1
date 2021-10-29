#include<stdio.h>
int main()
{
    int i,no;

    printf("请输入一个正整数：");
    scanf("%d",&no);
    i=2;
    while (no>=i)
    {
        printf("%d",i);
        i=i+2;
    }
    return 0;
}

