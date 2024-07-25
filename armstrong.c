#include<stdio.h>
int main()
{
    int n,sum=0,rem,c;

    printf("enter the number:");
    scanf("%d",&c);

    n=c;
    while(n>0)
    {
        rem = n%10;
        sum = sum+rem*rem*rem;
         n = n/10;
     
    }
  

    if(sum==c)
    {
        printf("%d value is amstrong",c);
    
    }
    else
    {
        printf("%d value is not armstrong",c);

    }
}
int main() {
    int i;

    printf("Armstrong numbers between 100 and 500 are:\n");

    
    for (i = 100; i <= 500; ++i) {
        if (isArmstrong(i))
            printf("%d\n", i);
    }

    return 0;
}

