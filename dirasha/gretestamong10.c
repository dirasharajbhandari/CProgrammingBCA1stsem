#include <stdio.h>

int main() {
    int n, i, big;
    for( i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &n);
        
        if(n > big) {
            big= n;
        }
    }
    printf("The greatest number is: %d\n", big);
    
    return 0;
}