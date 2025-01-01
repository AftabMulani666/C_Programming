#include <stdio.h>

#define MAX_SIZE 100  
#define ACCEPT_ARRAY(arr, size) accept_array(arr, size)
#define DISPLAY_ARRAY(arr, size) display_array(arr, size)

void accept_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void display_array(int arr[], int size) {
    printf("Array elements are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE], size;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size > MAX_SIZE) {
        printf("Size exceeds the maximum limit of %d.\n", MAX_SIZE);
        return -1;
    }

    ACCEPT_ARRAY(arr, size);

    
    DISPLAY_ARRAY(arr, size);

    return 0;
}
//Thanks
