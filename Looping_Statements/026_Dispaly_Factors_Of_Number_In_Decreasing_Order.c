#include <stdio.h>

int main() {
    int num, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d in decreasing order are: ", num);
    
    for (i = num; i > 0; i--) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}
