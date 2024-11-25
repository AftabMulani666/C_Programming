#include <stdio.h>

int main() {
    int number, digit, evenCount = 0;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (number < 0) {
        number = -number;
    }

    
    while (number > 0) {
        digit = number % 10; 
        if (digit % 2 == 0) { 
            evenCount++;
        }
        number /= 10; 
    }

    
    printf("Count of even digits: %d\n", evenCount);

    return 0;
}
