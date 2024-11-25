#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;  

    
    printf("Enter a number: ");
    scanf("%d", &num);


    if (num < 0) {
        num = -num;
    }

    
    if (num == 0) {
        product = 0;
    } else {
        
        while (num > 0) {
            digit = num % 10;  
            product *= digit;  
            num /= 10;         
        }
    }

    
    printf("The multiplication of all digits is: %lld\n", product);

    return 0;
}
