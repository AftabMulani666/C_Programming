#include <stdio.h>

int main() {
    float fahrenheit, celsius;

  
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    
    celsius = (fahrenheit - 32) * 5 / 9;

    
    printf("Temperature in Celsius: %.2f°C\n", celsius);

    return 0;
}
