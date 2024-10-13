#include <stdio.h>

int main() {
    int marks;
    
    // Get the student's marks from user
    printf("Enter the student's marks (0 to 100): ");
    scanf("%d", &marks);
    
    // Check for valid input
    if (marks < 0 || marks > 100) {
        printf("Invalid marks entered. Please enter a value between 0 and 100.\n");
        return 1; // Exit with an error code
    }
    
    // Determine the grade based on marks
    if (marks >= 90 && marks <= 100) {
        printf("Grade: A\n");
    } else if (marks >= 80 && marks < 90) {
        printf("Grade: B\n");
    } else if (marks >= 70 && marks < 80) {
        printf("Grade: C\n");
    } else if (marks >= 60 && marks < 70) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    
    return 0;
}
