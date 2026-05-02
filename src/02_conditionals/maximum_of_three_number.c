/*
Program: To find the maximum of three numbers
Description: This program prompts the user to enter three numbers and then displays the maximum of those numbers.
Date: 23-Mar-2026
*/

#include <stdio.h>

// function to find the maximum of three numbers
float findMaximum(float a, float b, float c) {
    float max = a; // assume a is the maximum
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

void input_validation(float *num1, float *num2, float *num3) {
    
    printf("Enter the numbers: ");

    while(1)
    {
        if(scanf("%f %f %f", num1, num2, num3) == 3 || *num1 >= 0 || *num2 >= 0 || *num3 >= 0)
        {
            break; // valid input, exit the loop
        }
        
            printf("Invalid input. Please enter three valid numbers: ");
            while (getchar() != '\n'); // clear the input buffer
    }
}


int main()
{
    float num1, num2, num3;

    // Program Header
    printf("--------Maximum of Three Numbers--------\n");

    // Prompt the user to enter three numbers
    input_validation(&num1, &num2, &num3);

    // Find and display the maximum of the three numbers
    float maximum = findMaximum(num1, num2, num3);
    printf("The maximum of the three numbers is: %.2f\n", maximum);

    return 0;
}