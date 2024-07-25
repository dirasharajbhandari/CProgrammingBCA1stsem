#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float per;
    printf("enter the mark:");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    per=(a+b+c+d+e)/5.0;
    printf("the percentage is:%.2f\n",per);
    //use of else if statement
    if (per>=90)
    {
        printf("grade A");
    }
        else if(per>=80)
        {
            printf("grade B");
        }
        else if(per>=70)
        {
            printf("grade C");
        }
        else if(per>=60)
        {
            printf("grade D");
        }
        else if(per>50)
        {
            printf("grade E");
        }
        else 
        {
            printf("grade F");
        }
    
}