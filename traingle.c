#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("The triangle is equilateral.\n");
    }
    else if (a == b || a == c || b == c) {
        printf("The triangle is isosceles.\n");
    }
    else {
        printf("The triangle is scalene.\n");
    }
    if (a * a + b * b == c * c || 
        a * a + c * c == b * b || 
        b * b + c * c == a * a) {
        printf("The triangle is a right-angled triangle.\n");
	}	
    return 0;
}