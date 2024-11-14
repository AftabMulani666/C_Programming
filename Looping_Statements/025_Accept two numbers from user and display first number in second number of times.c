#include <stdio.h>

int main() {
    int number, times;

  
    printf("Enter the first number: ");
    scanf("%d", &number);

    printf("Enter the second number (number of times to display): ");
    scanf("%d", &times);

    printf("Output:\n");
    
    
    for (int i = 0; i < times; i++) {
        printf("%d ", number);
    }

    printf("\n");

    return 0;
}
