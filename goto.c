#include<stdio.h>
int main()
{
    int a,b;
    printf("enter any two value:");
    scanf("%d%d",&a,&b);
    if (a>b)
      goto greater;
      else  
       goto smaller;

       greater:
       printf("%d Number is greater",a);
       goto end;

       smaller:
       printf("%d Number is greater",b);
       goto end;

       end:
       printf("\n");

    }