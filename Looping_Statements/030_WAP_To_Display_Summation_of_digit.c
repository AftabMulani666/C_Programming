#include <stdio.h>

int main() {
    int num, temp, sum = 0, digit, reverse = 0;

    
    printf("Input: ");
    scanf("%d", &num);

    
    temp = num;

    
    while (temp > 0) {
        reverse = reverse * 10 + (temp % 10);
        temp /= 10;
    }

    
    printf("Output: ");
    temp = reverse; 
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        printf("%d", digit);

        
        if (temp / 10 > 0) {
            printf("+");
        }
        temp /= 10;
    }

    
    printf(" = %d\n", sum);

    return 0;
}
