#include<stdio.h>
int main()
{
    int a,b,i;
    b=0;
    printf("please input a number:");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        if(b==5)
        {
            putchar('\n');
            b=0;
        }
        putchar('*');
        b++;

        }

    return 0;
}


