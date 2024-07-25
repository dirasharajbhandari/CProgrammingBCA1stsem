#include<stdio.h>
int main()
{
    int a,b,c;
    char choice;
    printf("Enter the operator:");
    scanf("%c",&choice);
    printf("Enter two number:");
    scanf("%d%d",&a,&b);

    switch(choice)
    {
        case '+':
          c =a+b;
        printf("%d is the ans\n",c);
        break;

        case '*':
        c=a*b;
        printf("%d is the ans\n",c);
        break;

        case '-':
        c=a-b;
        printf("%d is the ans\n",c);
        break;

        case '/':
        c=a/b;
        printf("%d is the ans\n",c);
        break;

        default:
        printf("Wrong choice\n");

    }

}