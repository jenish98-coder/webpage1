#include <stdio.h>

int main() {
    int num;
    
    // Read the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is positive or negative
    if (num > 0) {
        printf("%d is positive.", num);
    }
    else if (num < 0) {
        printf("%d is negative.", num);
    }
    else {
        printf("The number is zero.");
    }
    
    return 0;
}