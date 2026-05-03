/*
Program: Grade Calculator
Description: This program prompts the user to enter a numeric grade and then displays the corresponding letter grade.
Date: 23-Mar-2026
*/
#include <stdio.h>

void input_validation(float *grade) 
{
    printf("Enter the numeric grade: ");
    while(1)
    {
        if (scanf("%f", grade) == 1 && *grade >= 0 && *grade <= 100) 
        break;

        printf("Invalid input. Enter the grade againg: ");
        while (getchar() != '\n');  // buffer check
    }
}

char grade_calculator(float grade)
{
    if(grade >= 90)
    {
        return 'A';
    }
    if (grade < 90 && grade >= 80)
    {
        return 'B';
    }
    if (grade < 80 && grade >= 70)
    {
        return 'C';
    }
    if (grade < 70 && grade >= 60)
    {
        return 'D';
    }
    if (grade < 60 && grade >= 50)
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}

int main() {
    float grade;
   
    // program header
    printf("--------Grade Finder--------\n");

    // input section
    input_validation(&grade);

    // output section and processing
    
    printf("\n--------Result--------\n");
    printf("Grade: %c\n", grade_calculator(grade));
   

    return 0;
}