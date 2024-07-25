#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;
    originalNum = num;

    
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        return 1; 
    else
        return 0; 
}

int main() {
    int i;

    printf("Armstrong numbers between 100 and 500 are:\n");

    
    for (i = 100; i <= 500; ++i) {
        if (isArmstrong(i))
            printf("%d\n", i);
    }

    return 0;
}
