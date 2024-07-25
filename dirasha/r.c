#include <stdio.h>
int main() {
    int a[3][3],b[3][3],c[3][3];

    // Taking user input for the matrix
    printf("Enter elements for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Printing the matrix
	printf("\nMatrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    for(i)

    return 0;
}