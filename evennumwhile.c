#include <stdio.h>

int main() {
    int N;

    // Input the value of N from the user
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Initialize a variable to store the current number
    int num = 1;

    // Print even numbers from 1 to N using a while loop
    printf("Even numbers from 1 to %d are:\n", N);
    while (num <= N) {
        // Check if the current number is even
        if (num % 2 == 0) {
            printf("%d ", num);
        }
        // Move to the next number
        num++;
    }

    printf("\n");

    return 0;
}