#include<stdio.h>
int main()
{
    int a;
    printf("enter the value:");
    scanf("%d",&a);
    if(a %2==1)
    {
        printf("the value is prime");
    }
    else{
        printf("the value is composite");
    }
}