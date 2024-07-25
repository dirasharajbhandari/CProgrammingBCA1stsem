#include<stdio.h>
int main()
{
    int i;
    for (i=0;i<=5;i++)
    {
        if(i==3)
        {
            printf("i understand the use of break\n");
            break;

        }
        printf("Number=%d\n",i);
    }
    printf("out of loop");
    

}