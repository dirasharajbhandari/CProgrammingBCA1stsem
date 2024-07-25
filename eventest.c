#include<stdio.h>
int main()
{
    int n;
    printf("enter the value n:");
    scanf("%d",&n);
    int a=1;
    printf("Even number from 1 to %d is:\n",n);
     
     while(a<=n)
     if(a%2==0)
     
        printf("%d",a);
     {
     a++;
     }
    printf("\n");

     return 0;

}

