#include<stdio.h>
int main()
{
    int a;
    printf("enter the digit:");
    scanf("%d",&a);
    if (a %2==0)
    {
        printf("the value is even");
    }
    else{
        printf("the value is odd");
    }
}