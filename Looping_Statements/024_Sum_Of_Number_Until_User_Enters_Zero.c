#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter numbers to add to the sum (enter zero or a negative number to stop):\n");

    while (1) {  
        scanf("%d", &number);

        if (number <= 0) {  
            break;
        }

        sum += number;  
    }

    printf("The sum of the entered numbers is: %d\n", sum);

    return 0;
}
