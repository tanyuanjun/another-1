#include<stdio.h>
#include<math.h>
#define NUMBER 4
int main()
{
    int a,b,c,d;
    printf("数据个数：%d\n",NUMBER);
    int v[NUMBER];
    for(a=0;a<NUMBER;a++)
    {
        printf("No.%d:",a+1);
        scanf("%d",&v[a]);
    }
    putchar('{');

     for(a=0;a<NUMBER;a++)
     {
         printf("%d   ",v[a]);
     }
     putchar('}');
    return 0;
}




