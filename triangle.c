#include <stdio.h>

// Function to classify the type of triangle
void classifyTriangle(int side1, int side2, int side3) {
    // Check for equilateral triangle (all sides are equal)
    if (side1 == side2 && side2 == side3) {
        printf("It is an equilateral triangle.\n");
        return;
    }

    // Check for isosceles triangle (two sides are equal)
    if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("It is an isosceles triangle.\n");
        return;
    }

    // Check for right-angled triangle (Pythagoras theorem)
    if (side1*side1 == side2*side2 + side3*side3 ||
        side2*side2 == side1*side1 + side3*side3 ||
        side3*side3 == side1*side1 + side2*side2) {
        printf("It is a right-angled triangle.\n");
        return;
    }

    // If none of the above conditions are met, it's a scalene triangle
    printf("It is a scalene triangle.\n");
}

int main() {
    int side1, side2, side3;

    // Input lengths of three sides from the user
    printf("Enter the lengths of three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    // Check the type of triangle
    classifyTriangle(side1, side2, side3);

    return 0;
}