#include<stdio.h>
int main()
{
    int n,sum=0,rem,base=1;

    printf("enter the number:");
    scanf("%d",&n);

    while(n>0)
    {
        rem = n%10;
        sum=sum+rem*base;
        base= base*2;
        n = n/10;

    }
    printf("\n%d",sum);
    return 0;
    
}
