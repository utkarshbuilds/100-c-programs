/* Program: Full Pyramid
   Description: Prints a full pyramid pattern of any symbol based on user input for height and symbol.
   Date: 23-Mar-2026

   Example:
   Input: 4 *

   Output:
      *
     ***
    *****
   *******
*/


#include <stdio.h>

void input_validation(int *height_of_pyramid, char *symbol)
{
    while(1)
    {
        printf("Enter height (1-50) and a symbol (e.g. *, #): ");
        if(scanf("%d %c", height_of_pyramid, symbol) == 2 && *height_of_pyramid > 0 && *height_of_pyramid <= 50 && (*symbol >= 33 && *symbol <= 126))
            break;

        printf("Invalid input! Please try again.\n");
        while(getchar() != '\n'); // char buffer
    }
}

/*
Function: full_pyramid
Purpose : Prints a centered pyramid pattern using a given symbol
Logic   :
    - Leading spaces decrease each row
    - Symbols increase using formula (2*i + 1)
*/

void full_pyramid(int height, char symbol)
{
    for(int i = 0; i < height; i++)
    {
        // print leading spaces to center the pyramid
        for(int k = 0; k < height - i - 1; k++)
        {
            printf(" ");
        }

        // print symbols for current row
        for(int j = 0; j < (2 * i + 1); j++)
        {
            printf("%c", symbol);
        }

        printf("\n");
    }
}


int main()
{
    int height_of_pyramid;
    char symbol;

    // ======== Program Header ========

    printf("--------Full Pyramid Pattern--------\n");

    // ======== Input Validation ========

    input_validation(&height_of_pyramid, &symbol);

    // ======== Print the Full Pyramid ========

    printf("\n--------Pattern--------\n");

    full_pyramid(height_of_pyramid, symbol);

    return 0;
}