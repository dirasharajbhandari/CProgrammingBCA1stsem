#include<stdio.h>
int main()
{
    int i, n, x=0, y=1, z;
   printf("enter any integers:");
   scanf("%d", &n);
   printf("%d",y);

    for(i=1; i<n; i++)
    {
        z=x+y;
        printf("\n%d", z);
        x=y;
        y=z;

    }
    return 0;

}