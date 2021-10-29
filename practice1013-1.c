#include<stdio.h>
int main()
{
    int t,a;
    a=1;
    printf("please input a number");
    scanf("%d",&t);
    while(a<=t&&t>0)
    {
        if(a%2)
        {putchar('+');}
        else

       {

        putchar('-');}
        a++;


    }
    return 0;
}





