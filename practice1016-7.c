#include<stdio.h>
#define NUMBER 7
int main(  )
{
     int i;
     int x[NUMBER];                 //[]�ڵ�ֵΪ7�������������һ�����߸�Ԫ��
     for(i=0;i<7;i++)
     {
         printf("x[%d]:",i);            //��ʾ����x[0]
         scanf("%d",&x[i]);            //�����ɵĸ�һ��ֵ
     }
     for(i=0;i<3;i++)
     {
         int temp=x[i];
         x[i]=x[6-i];
         x[6-i]=temp;
     }
     puts("˳��ߵ���");
     for(i=0;i<NUMBER;i++)
     {
         printf("x[%d]=%d\n",i,x[i]);
     }
     return 0;
}
