#include<stdio.h>
int main()
{
    int a,b,c;
    puts("please input three numbers:");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    if(a==b&&b==c)
    {printf("either of them is equal");}

    if(a!=b&&b==c)
    {printf("two of them is equal");}

    if(a==b&&b!=c){printf("two of them is equal");}

    if(a==c&&c!=b){printf("two of them is equal");}

    if(a!=b&&b!=c){printf("neither of them is equal");}


    return  0;
}
