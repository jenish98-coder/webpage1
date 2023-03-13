#include <stdio.h>

int main() {
    float fahrenheit, centigrade;
    
    // Read temperature in Fahrenheit from the user
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    // Convert temperature from Fahrenheit to centigrade
    centigrade = (5.0 / 9.0) * (fahrenheit - 32);
    
    // Display temperature in centigrade
    printf("%.2f degrees Fahrenheit is equal to %.2f degrees centigrade.\n", fahrenheit, centigrade);
    
    return 0;
}