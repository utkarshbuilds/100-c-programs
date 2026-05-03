/*
Program: Square and Cube Calculator
Description: Takes a number as input and prints the square and cube of the number as a result.
Date: 20-Mar-2026
Version: 1.0
Author: Utkarsh Raj
*/

#include <stdio.h>

// Constants Declaration
#define SQUARE 2
#define CUBE 3

int main()
{
    // Variable Declaration
    float number, square = 1, cube = 1;

    //--------Input Section--------
    printf("========Square and Cube Finder========\n");
    
    //Validating input
    do
    {
        printf("Enter a Positive number: ");
    } while (scanf("%f", &number) != 1 || number <= 0);

    //--------Processing Section--------
    //Calculating the square and cube of number by using for loop

    for(int i = 0; i < SQUARE; i++)
    {
        square *= number;
    }
    cube = square * number;

    //--------Output Section--------
    printf("Square: %.2f\n", square);
    printf("Cube: %.2f\n", cube);

    return 0; 
}
