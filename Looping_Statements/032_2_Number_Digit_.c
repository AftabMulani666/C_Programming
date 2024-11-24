#include <stdio.h>

int main() {
    int number, temp;
    int containsTwo = 0; 

    
    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number; 

    
    while (temp != 0) {
        if (temp % 10 == 2) { 
            containsTwo = 1; 
            break;
        }
        temp /= 10; 
    }

    
    if (containsTwo) {
        printf("It Contains Two\n");
    } else {
        printf("There is no Two\n");
    }

    return 0;
}
