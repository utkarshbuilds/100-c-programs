/*
Program: Find largest of three number
Description: Takes three integers as input and determines the largest among them.
Date: 21-Mar-2026
Version: 1.0
Author: Utkarsh Raj
*/

#include <stdio.h>

int main() {
    // Variable Declaration
    int num1, num2, num3;

    //--------Input Section--------
    printf("========Largest of Three Numbers========\n");
    
    // Input Validation
    while(1)
    {
        printf("Enter three integers: ");
        if (scanf("%d %d %d", &num1, &num2, &num3) == 3)
            break;
        printf("Invalid input. Please enter three integers.\n");
        while (getchar() != '\n'); // Clear the input buffer
    }

    //--------Processing and Output Section--------
    printf("\n--------Result--------\n");
    
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %d\n", num2);
    } else {
        printf("The largest number is: %d\n", num3);
    }

    return 0;
}
