
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter three value:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is the greatest ");
        }
        else
        {
            printf("c is the greatest ");
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is the greatest ");
        }
        else
        {
            printf("c is the greatest ");
        }
    }
    if(a<b)
    {
        if(a<c)
        {
            printf("a is the smallest");
        }
        else
        {
            printf("c is the smallest");
        }
    }
    else
    {
        if (b<c)
        {
            printf("b is the smallest");
        }
        else
        {
            printf("c is the smallest");
        }
    }
    
}