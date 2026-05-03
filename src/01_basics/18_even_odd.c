/*
Program: Even or Odd
Description: This program takes an integer as input and determines whether it is even or odd.
Date: 21-Mar-2026
Version: 1.0
Author: Utkarsh Raj
*/

#include <stdio.h>

int main() {
    // Variable Declaration
    int num;

    // Input Validation
    while (1)
    {
        printf("Enter an integer: ");

        if (scanf("%d", &num) == 1)
            break;

        printf("Invalid input. Try again.\n");
        while (getchar() != '\n'); // clear buffer
    }

    // Processing and Output Section
    printf("\n--------Result--------\n");
  
    if (num % 2 == 0) 
    {
        printf("%d is even.\n", num);
    } 
    else 
    {
        printf("%d is odd.\n", num);
    }

    return 0;
}
