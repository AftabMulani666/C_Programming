#include <stdio.h>

int main() {
    int number, digit, product = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (number < 0) {
        number = -number;
    }

    
    if (number == 0) {
        product = 0;
    } else {
        while (number > 0) {
            digit = number % 10;  
            product *= digit;    
            number /= 10;        
        }
    }

    printf("Multiplication of all digits: %d\n", product);
    return 0;
}
