/*
Program: Half Pyramid
Description: This program prints a half pyramid pattern of stars.
Date: 23-Mar-2026
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

void print_half_pyramid(int height_of_pyramid, char symbol)
{
    for(int i = 1; i <= height_of_pyramid; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%c", symbol);
            for(int k = 1; k <= 2; k++)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}


int main()
{
    int height_of_pyramid;
    char symbol;

    // program header
    printf("--------Half Pyramid Pattern--------\n");

    // input validation
    input_validation(&height_of_pyramid, &symbol);

    // print the half pyramid
    printf("\n--------Pattern--------\n");
    print_half_pyramid(height_of_pyramid, symbol);

    return 0;
}