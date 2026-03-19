/*
Program: Area of Right Angle Triangle Calculator
Description: Takes base and height as the input, and prints the area of triangle calculated by using formula (1/2 * base * height).
Date: 19-Mar-2026
Input: Base(float), Height(float)
Output: Area(float)
Version: 1.0
Author: Utkarsh Raj
*/

#include <stdio.h>

// Constant Declaration
#define HALF (1.0 / 2.0)

int main()
{
  // Variable Declaration
  float base, height, area;

  // --------Input Section--------
  printf("----------Area Calculator--------\n");
  printf("-------Right Angle Triangle------\n");

  // Input validation
  if(scanf("%f %f", &base, &height) != 2)
  {
      printf("Error!\n");
      return 1;
  }

  // Valid Input Registration
  // Using do-while loop for input validation and valid input registration

  do
  {
      if(base <= 0)
      {  
          printf("Invalid Input!, Enter the value of Base(Positive number): ");

          if(scanf("%f", &base) != 1)
          {
              printf("Error!\n");
              return 2;
          }
      }

     if(height <= 0)
      {  
          printf("Invalid Input!, Enter the value of Height(Positive number): ");

          if(scanf("%f", &height) != 1)
          {
              printf("Error!\n");
              return 3;
          }
      }
  }while(base <= 0 || height <= 0);


  // --------Processing Section--------
  area = HALF * base * height;


  // --------Output Section--------
  printf("\n Area of Triangle: %.2f\n", area);
  return 0;
}


      

  



  
