#include<stdio.h>
int main()
{
    int a,b,c;
    printf("please input a number:"); scanf("%d",&a);

    for(b=1;b<=a;b++)
    {
        for(c=1;c<=a-b;c++)
        {
            putchar(' ');
        }
        for(c=1;c<=2*b-1;c++)
        {
            putchar('*');
        }
        putchar('\n');

    }
    return 0;
}
