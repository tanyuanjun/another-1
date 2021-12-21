#include<stdio.h>
#include<string.h>
#define NUMBER 20
int main()
{
    int tem;
    char p1[10][NUMBER];
    char *a1;
    for(int i=0;i<10;i++)
    {
        scanf("%s",&p1[i][NUMBER]);
    }
    a1=p1;
    int a[10];
    for(int i=0;i<10;i++)
    {
        a[i]=strlen(*(p1+i));
    }
    int v[10];
    for(int i=0;i<10;i++)
    {
        v[i]=a[i];
    }
     for(int i=0;i<10;i++)
    {
       for(int j=0;j<10&&(j+1)<10;j++)
       {
               if(v[j]<v[j+1])
               {
                tem=v[j];
               v[j]=v[j+1];
               v[j+1]=tem;
               }
       }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(v[i]==a[j])
            {
                printf("%s",*(p1+j));
            }
        }
        putchar('\n');
    }
    return 0;
}
