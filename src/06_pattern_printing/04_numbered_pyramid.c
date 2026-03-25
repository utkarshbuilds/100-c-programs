/*
Program: Numbered Pyramid
Description: This program prints a numbered pyramid pattern based on user input for height.
Date: 23-Mar-2026

Example:
Input: 4        
Output:
   1
  2 3
 4 5 6
7 8 9 10
*/

#include <stdio.h>

/*
Function: input_validation
Purpose : Validates user input for height of the pyramid
Logic   :
    - Prompts user for height (1-50)
    - Checks if input is an integer and within valid range
    - If invalid, displays error message and prompts again
*/

void input_validation(int *height_of_pyramid)
{
    while(1)
    {
        printf("Enter height (1-50): ");
        if(scanf("%d", height_of_pyramid) == 1 && *height_of_pyramid > 0 && *height_of_pyramid <= 50)
            break;

        printf("Invalid input! Please try again.\n");
        while(getchar() != '\n'); 
    }
}

/*
Function: numbered_pyramid
Purpose : Prints a numbered pyramid pattern based on the given height
Logic   :
    - Leading spaces decrease each row to center the pyramid                
    - A counter variable is used to print consecutive numbers across rows
*/          

void numbered_pyramid(int height)
{
    int number = 1; // Start numbering from 1

    for(int i = 0; i < height; i++)
    {
        // Print leading spaces to center the pyramid
        for(int k = 0; k < height - i - 1; k++)
        {
            printf(" ");
        }

        // Print numbers for the current row
        for(int j = 0; j <= i; j++)
        {
            printf("%2d ", number);
            number++; // Increment number for next position
        }

        printf("\n");
    }
}

int main()
{
    int height_of_pyramid;

    // ======== Program Header ========
    printf("--------Numbered Pyramid Pattern--------\n");

    // Input validation for pyramid height
    input_validation(&height_of_pyramid);

    // Print the numbered pyramid pattern
    printf("\n--------Pattern--------\n");
    numbered_pyramid(height_of_pyramid);

    return 0;
}