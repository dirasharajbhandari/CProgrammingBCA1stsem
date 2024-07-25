#include<stdio.h>
int main()
{
    int a;
    printf("enter the year:");
    scanf("%d",&a);
    if(a %4==0 && a%100==0 || a%400==0)
    {
        printf(" %d this is leap year",a);
    }
    else
     {
     printf("%d this is not leap year",a);
     }

     return 0;

    

}