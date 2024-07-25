#include<stdio.h>

int main()
{
int a,b,c;
printf("enter the 3 number");
scanf("%d %d %d",&a,&b,&c);
if (a>b)
{ 
     if(a>c)
     {
          printf("a is the highest value %d",a);

     }
     else
     {
          printf("b is the highest value %d",c);
     }
}
else
{
     if(b>c)
     {
          printf("b is the highest value %d",b);

     }
     else
     {
          printf("c is the highest value %d",c);
     }

 
}
return 0;
}