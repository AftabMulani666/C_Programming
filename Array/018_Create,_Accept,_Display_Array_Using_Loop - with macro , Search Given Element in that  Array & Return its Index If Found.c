#include <stdio.h>

#define MAX_SIZE 100  
#define SEARCH_ELEMENT(arr, size, elem) search_element(arr, size, elem)

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

int search_element(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int arr[MAX_SIZE], size, element, index;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size > MAX_SIZE) {
        printf("Size exceeds the maximum limit of %d.\n", MAX_SIZE);
        return -1;
    }

    
    accept_array(arr, size);

    
    display_array(arr, size);

    printf("Enter the element to search: ");
    scanf("%d", &element);
    index = SEARCH_ELEMENT(arr, size, element);

    if (index != -1) {
        printf("Element found at index %d.\n", index);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
//Thanks
