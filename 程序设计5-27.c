#include<stdio.h>
int strcmp(char *p1,char *p2,int n)
{
    char *i,*j;
    int x,y,a,b;
    i=p1;
    j=p2;
    for(a=0;a<n;a++)
    {
        if(*(i+a)==*(j+a))
        {
            ;
        }
        else
        {
            x=*(i+a);
            y=*(j+a);
            b=x-y;
            break;
        }
    }
    return b;

}
int main ()
{
    int strcmp(char *p1,char *p2,int n);
    char *k1,*k2;
    char a[10];
    char v[10];
    int i,j,l;
    gets(a);
    gets(v);
    k1=a;
    k2=v;
    l=strcmp(k1,k2,10);
    printf("%d",l);
    return 0;
}

