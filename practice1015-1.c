#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    printf("please a number:");
    scanf("%d",&n);
    i=1;
    for(a=1;a<=n;a++&&i++)
    {
        for(b=1;b<=n-a;b++)
        {
            putchar(' ');
        }
        for(b=1;b<=2*a-1;b++)
        {
            printf("%d",i%10);

        }
        putchar('\n');
    }
    return 0;
}
