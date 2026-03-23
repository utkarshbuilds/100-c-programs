/*
Program: ASCII Finder
Description: This program prompts the user to enter a character and then displays the ASCII value of that character.
Date: 23-Mar-2026
*/

#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("The ASCII value of %c is %d\n", c, (int)c);
    return 0;
}