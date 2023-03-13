#include <stdio.h>

int main() {
    float height, base, area;
    
    // Read the height and base from the user
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    
    // Calculate the area of the triangle
    area = 0.5 * height * base;
    
    // Display the area of the triangle
    printf("The area of the triangle is %.2f", area);
    
    return 0;
}
