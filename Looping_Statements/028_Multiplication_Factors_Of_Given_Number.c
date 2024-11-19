#include <stdio.h>

int main() {
    int num, i;
    unsigned long long product = 1;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num <= 1) {
        printf("The multiplication of factors is %d\n", num);
        return 0;
    }

    // Find factors and multiply them
    printf("Factors: ");
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);  
            product *= i;     
        }
    }

    printf("\nThe multiplication of factors is %llu\n", product);
    return 0;
}
