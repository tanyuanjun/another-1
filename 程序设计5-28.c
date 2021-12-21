#include<stdio.h>
#include<string.h>
#define NUMBER 40
void chooseform(char *a,int m,int n)
{
    char *t,*p;
    char v[n-m];
    int i,f;
    p=a;
    t=v;
    for(i=0;i<(n-m)&&(m+i)<n;i++)
    {
        *(t+i)=*(p+m+i);
    }
    printf("string is:%s",*t);
}
int main ()
{
    void chooseform(char *a,int m,int n);
    char a[NUMBER];
    char *v;
    char str[NUMBER];
    char str1[NUMBER];
    int b,c,d,e=-1,j=-1,x,y;
    gets(a);
    v=a;
    c=strlen(a);
    for(int i=0;i<c;i++)
    {
        d=*(v+i);
        if(d>=48&&d<=57)
        {
            str[++e]=*(v+i);
        }
        else
        {
            str1[++j]=*(v+i);
        }
    }
    puts(str);
    putchar('\n');
    puts(str1);
    putchar('\n');
    chooseform(*v,10,c);
    return 0;
}
