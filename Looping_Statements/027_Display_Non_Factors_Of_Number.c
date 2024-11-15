#include <stdio.h>

int main() {
    int number;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        printf("Non-factors of %d are: ", number);
        for (int i = 1; i <= number; i++) {
            if (number % i != 0) { 
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
