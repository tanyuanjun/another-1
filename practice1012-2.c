#include<stdio.h>
int main()
{
    int i,no;

    printf("请输入一个正整数：");
    scanf("%d",&no);
    i=1;
    while (no>=1)
    {
        if(no>=1)
            {printf("%d",no);
            no--;}

        else
            break;
    }
    return 0;


}
