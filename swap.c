#include <stdio.h>

int main() {
    int a, b, temp;
    
    // Read the values of a and b from the user
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    // Swap the values of a and b using a temporary variable
    temp = a;
    a = b;
    b = temp;
    
    // Display the swapped values of a and b
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    return 0;
}


