#include<stdio.h>
int main()
{
    double angle1, angle2, angle3;

    // Prompt user for input
    printf("Enter the first angle in degrees: ");
    scanf("%lf", &angle1);

    printf("Enter the second angle in degrees: ");
    scanf("%lf", &angle2);

    // Calculate the third angle
    angle3 = 180 - angle1 - angle2;

    // Display the result
    printf("The third angle is %.2lf degrees\n", angle3);

    return 0;
}