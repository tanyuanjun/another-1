#include<stdio.h>
int main()
{
    int a,b;
    printf("please input a number:"); scanf("%d",&a);
    printf("please input a number:"); scanf("%d",&b);
    for(a=1;a<=9;a++)
    {
        for(b=1;b<=9;b++)
            printf("%4d",a*b);
        putchar('\n');
    }
    return 0;
}
