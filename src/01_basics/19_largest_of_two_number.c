/*
Program: Largest of Two Numbers
Description: Determines the larger of two integers or checks if they are equal.
Date: 21-Mar-2026
Version: 1.0
Author: Utkarsh Raj
*/

#include <stdio.h>

int main() {
    // Variable Declaration
    int num1, num2;

    //--------Input Section--------
    printf("========Largest of Two Numbers========\n");
    
    // Input Validation
    while(1)
    {
        printf("Enter two integers separated by space: ");
        if (scanf("%d %d", &num1, &num2) == 2)
            break;
        printf("Invalid input. Please enter two integers.\n");
        while (getchar() != '\n'); // Clear the input buffer
    }

    //--------Processing and Output Section--------
    printf("\n--------Result--------\n");
    
    if (num1 > num2) {
        printf("Largest: %d\n", num1);
    } else if (num2 > num1) {
        printf("Largest: %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
