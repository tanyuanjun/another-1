#include<stdio.h>
#include<math.h>
#define NUMBER 80
int main ()
{
    int a,b;
    int num;
    int x[NUMBER];
    int y[11]={0};
    printf("请输入学生人数：");
    do
    {
        scanf("%d",&num);
        if(num<1||num>NUMBER)
            printf("请输入1-%d的数",NUMBER);
    }while(num<1||num>NUMBER);
    printf("请输入%d人的分数\n",num);
    for(a=0;a<num;a++)
        {
            printf("%2d:",a+1);
        do
        {
            scanf("%d",&x[a]);
            if(x[a]<0||x[a]>100)
                printf("error");
        }while(x[a]<0||x[a]>100);
        y[x[a]/10]++;
        }
        puts("\n---分布图---");
        printf("     100:\n");
        for(b=0;b<y[10];b++)
        {
            putchar('*');
            putchar('\n');
        }
        for(a=9;a>=0;a--)
        {
            printf("%3d---%3d",a*10,a*10+9);
            for(b=0;b<y[a];b++)
                putchar('*');
            putchar('\n');
        }
        return 0;



}
