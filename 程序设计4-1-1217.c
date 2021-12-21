#include<stdio.h>
int main()
{
    int A[4][5];
    int i,j,a,b,tem=0,flag=0;
    int s[4]={0};
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("the origin matrix is:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%3d",A[i][j]);

        }
        putchar('\n');
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            s[i]=s[i]+A[i][j];
        }
    }
    for(i=0;i<4&&(i+1)<4;i++)
    {
        if(s[i+1]>s[i])
        {
            tem=i+1;
        }
    }
   for(j=0;j<5;j++)
        {
            flag=A[tem][j];
            A[tem][j]=A[0][j];
            A[0][j]=flag;
        }
    printf("the changed matrix is:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%3d",A[i][j]);

        }
        putchar('\n');
    }
    return 0;
}
