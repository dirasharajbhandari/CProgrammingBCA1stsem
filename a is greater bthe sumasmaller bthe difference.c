#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter any two digit:");
    scanf("%d %d ",&a,&b);
    if (a>b)
    {
        c=a+b;
        printf("the sum is:%d\n",c);
    }
    else
    {
        d=a-b;
        printf("the difference is:%d\n",d);
    }

    return 0;

}