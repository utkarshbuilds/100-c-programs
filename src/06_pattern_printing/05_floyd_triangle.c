/*
Program: Floyd's Triangle
Description: This program prints Floyd's triangle pattern based on user input for height.
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
Purpose : Validates user input for height of the triangle
Logic   :
    - Prompts user for height (1-50)
    - Checks if input is an integer and within valid range
    - If invalid, displays error message and prompts again
*/

void input_validation(int *height_of_triangle)
{
    while(1)
    {
        printf("Enter height (1-50): ");
        if(scanf("%d", height_of_triangle) == 1 && *height_of_triangle > 0 && *height_of_triangle <= 50)
            break;

        printf("Invalid input! Please try again.\n");
        while(getchar() != '\n'); 
    }
}

/*
Function: floyds_triangle       
Purpose : Prints Floyd's triangle pattern based on the given height
Logic   :
    - A counter variable is used to print consecutive numbers across rows
    - Each row contains one more number than the previous row
*/

void floyd_triangle(int height_of_triangle)
{
    int counter = 1; // counter element of floyd's triangle
    for(int i = 0; i < height_of_triangle; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            printf("%2d", counter);
            
            if(j < i)
            {
                printf(" ");
            }
            counter++;
        }
        printf("\n");
    }
}


// ======Main Function======
int main()
{
    // ===== Execution =====
    int height_of_triangle;

    printf("--------Floyd's Triangle--------\n");

    // ===== Input Registration & Validation =====
    input_validation(&height_of_triangle);

    // ===== Floyed's triangle =====
    printf("--------Result--------\n");
    floyd_triangle(height_of_triangle);

    return 0;    
}