#include <stdio.h>

#define MAX_LENGTH 100 // maximum length of the input string

int main() {
    char str[MAX_LENGTH];

    printf("Enter a line of text: ");
    gets(str); // read a line of text using gets() function

    printf("The input line is: ");
    puts(str); // display the input line using puts() function

    return 0;
}
