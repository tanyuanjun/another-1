#include<stdio.h>
int main()
{
    int i,n,a;

    do
    {
         printf("please input a number");
         scanf("%d",&n);
         if(n<=0)
         puts("error,please another number");
    }while(n<=0);
     printf("the original number is%d\n",n);
     printf("the oppsite number is:");
     a=0;
    while(n>0)
    {

        ++a;
        i=n%10;
        printf("%d",i);
        n=n/10;

    }
    printf("\nÎ»ÊıÊÇ%d",a);
    return 0;
}

