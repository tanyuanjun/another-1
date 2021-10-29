#include<stdio.h>
int main ()
{
    int a,i,x;

    printf("please input a number");
    scanf("%d",&a);
    x=1;
    i=1;
    while(i<=a)
    {

        printf("%3d",x);

        x=x+2;
        i=i+2;
    }
    return 0;
}
