#include<stdio.h>
int main()
{
    int month;
    printf("please input a number to decescribe the month");
    scanf("%d",&month);
    switch(month)
    {
    case 3: printf("spring");    break;
    case 4: printf("spring");    break;
    case 5: printf("spring");    break;
    case 6: printf("summer");    break;
    case 7: printf("summer");    break;
    case 8: printf("summer");    break;
    case 9:  printf("fall");     break;
    case 10: printf("fall");     break;
    case 11: printf("fall");     break;
    case 12: printf("winter");   break;
    case 1:  printf("winter");   break;
    case 2:  printf("winter");   break;
    }
    return 0;
}
