#include <stdio.h>

int main() {
    int a, b;
    
    // Get input from user
    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);
    
    // Equality check
    if (a == b) {
        printf("The numbers are equal.\n");
    } else {
        printf("The numbers are not equal.\n");
    }
    
    // Logical AND and OR example
    if (a > 0 && b > 0) {
        printf("Both numbers are positive.\n");
    } else if (a > 0 || b > 0) {
        printf("At least one of the numbers is positive.\n");
    } else {
        printf("Neither number is positive.\n");
    }
    
    return 0;
}
