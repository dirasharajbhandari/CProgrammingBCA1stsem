#include<stdio.h>
int fact(int x);
int main()
{
   
    int a;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&a);

    printf("\nFactorial of a Given Number is: %d ",fact(a));

    return 0;
}
int fact(int x)
{
    int b=1;
    for(int i=1; i<=x; i++)
    {
        b=  b*i;
    }
    return b;
}
