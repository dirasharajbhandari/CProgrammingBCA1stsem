#include<stdio.h>
int main()
{
    int a;
    printf("enter the year:");
    scanf(:%d,&a);
    if(a%400==0)
    {
        if(a%100==0)
        {
            printf("this is leap year")
        }
    }
}