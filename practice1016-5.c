#include<stdio.h>
int main()
{
    int i;
    int v[5];
    int a=5;
    for (i=0;i<5;i++)

       {

        v[i]=a;


    for(i=0;i<5;i++)
    {
        printf("v[%d]=%d\n",i,a--);

    }

       }
    return 0;

}
