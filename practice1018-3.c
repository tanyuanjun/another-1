#include<stdio.h>
#include<math.h>
#define A 4
#define B 3
int main()
{
    int i,j;
    int x[A][B];
    int y[B][A];
    int z[A][B]={0};
    puts("please input the first matrix:\n");
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
           scanf("%d",&x[i][j]);
        }

    }

    puts("please input the second matrix:\n ");
    for(i=0;i<B;i++)
    {
        for(j=0;j<A;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    for(i=0;i<A;i++)
    {
        for(j=0;j<A;j++)
        {
            for(int k=0;k<B;k++)
                z[i][j]=x[i][k]*y[k][j];
        }
    }
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)

            {


                printf("%4d ",z[i][j]);}

        putchar('\n');
    }
    return 0;
}
