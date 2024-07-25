#include<stdio.h>
int main()
{
    int n,a,rem,pal=0;
    printf("Enter any double digit interger: ");
    scanf("%d",&a);
    n=a;
    while(n!=0)
    {
        rem=n%10;
        pal=pal*10+rem;
        n=n/10;        
    }
    if(pal==a){
        printf("The number is Palindrome number %d",a);
    }
    else{
        printf("The number is not a Palindorme number %d",a);
    }
    
}