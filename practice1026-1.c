#include<stdio.h>
void adjust_point(int *n)
{

    if(*n>100)
    {
        *n=100;
    }
    if(*n<0)
    {
        *n=0;
    }
}

int main()
{
    int y,m,d,a,b,c;
    printf("please input a clear date number:");scanf("%d,%d,%d",&y,&m,&d);

    decrement_date(&y,&m,&d);

    printf("%dÄê%dÔÂ%dÈÕ\n",y,m,d);
    return 0;
}

void decrement_date(int *y, int *m, int *d)
{
      *d = *d - 1;
      if (*d < 1)
        {
           *m = *m - 1;
            if (*m == 4 || *m == 6 || *m == 9 || *m == 11)
                {
                  *d = 30;
                 }

       else if (*m == 2)
                  {
                        *d = 28;
                     if (*y % 4 == 0)
                       {
                          *d = 29;
                       }
                  }
                else
                     {
                        *d = 31;
                     }

                if (*m < 1)
           {
           *y = *y - 1;
           *m = 12;
          }
}

}

void increment_date(int *y, int *m, int *d) {
*d = *d + 1;
if (*d > 28 && *m == 2) {
*m = *m + 1;
*d = 1;
if (*y % 4 == 0) {
*m = 2;
*d = 29;
}
}

if (*d > 30 && *m == 4 || *m == 6 || *m == 9 || *m == 11) {
*m = *m + 1;
*d = 1;
}

if (*d > 31) {
*m = *m + 1;
*d = 1;

if (*m > 12) {
*y = *y + 1;
*m = 1;
}
}

}
