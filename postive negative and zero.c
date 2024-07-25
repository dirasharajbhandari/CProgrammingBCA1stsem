#include<stdio.h>
int main()
{
    int a;
    printf("enter the value:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("the value is postive");
    }
    else if(a<0)
    {
        printf("the value is negative");
    }

    else
    {
        printf("the value is zero");
    }
}