#include<stdio.h>
int main()
{
    int i,no;

    printf("������һ����������");
    scanf("%d",&no);
    i=2;
    while (no>=i)
    {
        printf("%d",i);
        i=i+2;
    }
    return 0;
}

