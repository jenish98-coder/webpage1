#include <stdio.h>

#define MAX_LENGTH 100 // maximum length of the input string

int main() {
    char str[MAX_LENGTH];

    printf("Enter a string with embedded white space and containing only letters a-z: ");
    scanf("%[a-z ]", str); // read a string with embedded white space and containing only letters a-z

    printf("The input string is: %s\n", str); // display the input string on the screen

    return 0;
}
