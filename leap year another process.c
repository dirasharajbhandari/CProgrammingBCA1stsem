#include<stdio.h>
int main()
{
    int a;
    printf("enter the year:");
    scanf("%d",&a);
    if(a%100==0)
    {
        if(a%400==0)
        {
            printf("the year is leap year");
        }
        else
        {
            printf("the year is not leap year");
        }
    }
    else
    {
        if(a%4==0)
        {
            printf("the year is leap year");
        }
        else
        {
            printf("the year is not leap year");
        }
    }
}