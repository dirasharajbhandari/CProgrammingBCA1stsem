#include<stdio.h>

int main() 

{

    int number;
    printf("enter the number:");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd\n");

    }

    return 0;
}