#include<stdio.h>
int main()
{
    int n,sum,rem,base=1;

    printf("enter the number:");
    scanf("%d",&n);

    while(n>0)
    {
        rem = n%10;
        sum = sum*base;
         n = n/10;
        base=base*2;
       
    }
    printf("\n%d",base);
}