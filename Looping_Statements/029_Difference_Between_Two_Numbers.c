#include <stdio.h>

int main() {
    int number, i;
    int sumFactors = 0, sumNonFactors = 0;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    
    for (i = 1; i <= number; i++) {
        if (number % i == 0) {
            sumFactors += i; 
        } else {
            sumNonFactors += i; 
        }
    }

    
    int difference = sumFactors - sumNonFactors;

    
    printf("Sum of factors: %d\n", sumFactors);
    printf("Sum of non-factors: %d\n", sumNonFactors);
    printf("Difference: %d\n", difference);

    return 0;
}
