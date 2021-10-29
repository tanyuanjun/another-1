#include<stdio.h>
int main()
{
    int a,b,i;
    printf("please input a number:");
    scanf("%d",&a);
    i=1;
    for(b=1;b<=a;b++)
    {
        printf("%d\n",i*i);
        i++;
    }
    return 0;
}
