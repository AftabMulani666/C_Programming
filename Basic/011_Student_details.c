#include <stdio.h>

int main() {
    char name[50], course[50], city[50];
    int rollNumber;

    // Accepting student details from the user
    printf("Enter Student Name: ");
    scanf("%49[^\n]", name); // Read input until a newline
    getchar(); // To consume the newline left in the input buffer

    printf("Enter Roll Number: ");
    scanf("%d", &rollNumber);
    getchar(); // To consume the newline left in the input buffer

    printf("Enter Course: ");
    scanf("%49[^\n]", course);
    getchar(); // To consume the newline left in the input buffer

    printf("Enter City: ");
    scanf("%49[^\n]", city);

    // Displaying all student information in a single print statement
    printf("Student Name: %s, Roll Number: %d, Course: %s, City: %s\n", name, rollNumber, course, city);

    return 0;
}
//Thanks
