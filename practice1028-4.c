#include<stdio.h>
int main()
{
    int i,j,n;
    printf("please input the line in n:");
    scanf("%d",&n);
    printf("please input the line in j:");
    scanf("%d",&j);
    char a[n][5];
    char *p[j-3];
    for(int x=0;x<n;x++)
    {
        printf("a[%d]=",x);
        scanf("%s",a[x]);

    }
    for(i=0;i<n;i++)
    {
        printf("a[%d]=\"%s\"\n",i,a[i]);
    }
    for(int q=0;q<j;q++)
    {
        printf("*p[%d]=",j);
        scanf("%s",*p[j]);
    }
    for(i=0;i<j;i++)
    {
        printf("p=[%d]=\"%s\"\n",i,*p[i]);

    }
    return 0;
}
