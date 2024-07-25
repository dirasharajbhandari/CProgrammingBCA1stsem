#include<stdio.h>
#include<string.h>
int main() 
{
    int a, b;
    char choice;
    printf("Enter your choice + for addition, - for subtraction, * for multiplication, / for division: ");
  
    scanf("%c",& choice);
     printf("Enter any two numbers: ");
    scanf("%d%d",&a,&b);
    switch(choice) 
    {
        case '+':
            printf("\nSum of %d and %d is: %d", a, b, a + b);
            break;
        case '-':
            printf("\nDifference of %d and %d is: %d", a, b, a - b);
            break;
        case '*':
            printf("\nProduct of %d and %d is: %d", a, b, a * b);
            break;
        case '/':
            printf("\nDivision of %d by %d is: %.2f", a, b, (float)a / b);
            break;
        default:
            printf("\nInvalid option");
            break;
    }

    return 0;
}