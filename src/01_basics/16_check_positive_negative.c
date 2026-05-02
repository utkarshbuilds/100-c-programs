/*
Program: Check Number
Description: Determines if a number is positive, negative, or zero based on user input.
Date: 20-Mar-2026
Version: 1.0
Author: Utkarsh Raj
*/

#include <stdio.h>

int main()
{
    int number;

    //--------Input Section--------
    printf("========Check Number========\n");
    while (1)
    {   
        printf("Enter a number: ");

        // break the loop if a valid integer is entered
        if (scanf("%d", &number) == 1)
            break;

        printf("Invalid input. Try again.\n");
        while (getchar() != '\n'); // clear buffer
    }

    //--------Processing Section and Output Section--------

    printf("\n--------Result--------\n");

    if (number > 0)
    {
        printf("The number is positive.\n");
    }
    else if (number < 0)
    {
        printf("The number is negative.\n");
    }
    else
    {
        printf("The number is zero.\n");
    }

    return 0;
}
