/*
Program: Inverted Pyramid
Description: Prints an inverted pyramid pattern of any symbol based on user input for height and symbol.
Date: 23-Mar-2026

Example:
Input: 4 *  
Output:
*******
 *****
  ***
   *    
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
Function: inverted_pyramid
Purpose : Prints an inverted pyramid pattern using a given symbol
Logic   :
    - Leading spaces increase each row
    - Symbols decrease using formula (2*(height - i) - 1)
*/

void inverted_pyramid(int height, char symbol)
{
    for(int i = 0; i < height; i++)
    {
        // print leading spaces to center the pyramid
        for(int k = 0; k < i; k++)
        {
            printf(" ");
        }

        // print symbols for current row using formula (2*(height - i) - 1)
        for(int j = 0; j < (2 * (height - i) - 1); j++)
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

    printf("--------Inverted Pyramid Pattern--------\n");

    input_validation(&height_of_pyramid, &symbol);

    printf("\n--------Pattern--------\n");

    inverted_pyramid(height_of_pyramid, symbol);
    
    return 0;
}