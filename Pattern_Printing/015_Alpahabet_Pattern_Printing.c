#include <stdio.h>

int main() {
    int i, j;
    
    // Loop for each row
    for(i = 1; i <= 4; i++) {
        for(j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n"); 
    }
    
    return 0;
}
