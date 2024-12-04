#include <stdio.h>

int main() {
    int rows = 5; 
    int i, j, k;

    for (i = 1; i <= rows; i++) {
        
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        
        if (i % 2 == 1) {
            
            for (k = 1; k <= (2 * i - 1); k++) {
                printf("$ ");
            }
        } else {
            
            for (k = 1; k <= (2 * i - 1); k++) {
                printf("# ");
            }
        }

        
        printf("\n");
    }

    return 0;
}
