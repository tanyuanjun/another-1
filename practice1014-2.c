#include<stdio.h>
int main()
{
    int t,a,i;
    a=1 ;
    i=0;
    printf("please input a number");
    scanf("%d",&t);
    while(i<=t&&t>0)
    {

    if(a<9)
        {
        printf("%d",a);
        a++;
        }

    else
        {
            a=0;

        }
        i++;
      }
    return 0;
}

