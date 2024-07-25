#include<stdio.h>
int add(int x,int y);//function declaration//
int main()
{
    int a=5,b=6,c;
    c = add(a,b);//function call//
    printf("The sum of two number %d",c);
    return 0;

}
add(int x,int y)
{
    int z;
    z=x+y;
    return z;

}
