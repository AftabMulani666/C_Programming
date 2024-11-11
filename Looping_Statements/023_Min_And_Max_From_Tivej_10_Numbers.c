#include <stdio.h>

int main() {
    int number, i, min, max;

    
    printf("Enter number 1: ");
    scanf("%d", &number);
    min = max = number;

    
    for (i = 2; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number < min) {
            min = number;
        }
        if (number > max) {
            max = number;
        }
    }

    
    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);

    return 0;
}
