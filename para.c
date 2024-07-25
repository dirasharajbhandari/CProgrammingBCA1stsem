#include<stdio.h>
int main()
{
    int a,n,sum=0,rem;
    printf("enter any number:");
    scanf("%d",&a);

   n=a;
    while(n!=0)
    {
        rem = n%10;
        sum = sum*10+rem;
         n = n/10;
     
    }
    printf("%d\n",sum);


    if(sum==a)
    {
        printf("%d value is palindrome",a);
    
    }
    else
    {
        printf("%d value is not palindrome",a);

    }
}
