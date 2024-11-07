#include <stdio.h>

int main() 
{ 
    printf("ASCII Table (0-127):\n");
    printf("-----------------------\n");
    printf("Decimal\tCharacter\n");
    printf("-----------------------\n");

    for (int i = 0; i < 128; i++) {
        if (i < 32 || i == 127) { 
            printf("%d\tNon-printable\n", i);
        } else {
            printf("%d\t%c\n", i, i);
        }
    }

    return 0;
}
