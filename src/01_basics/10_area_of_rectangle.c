/* 
Program: Area of Rectangle Calculator
Description: Takes length and breadth as input and prints area as result.
Date: 19-Mar-2026
Input: Length(float), Breadth(float)
Output: Area(float)
Version: 1.0
Author: Utkarsh Raj
*/

#include <stdio.h>

int main()
{
  // Variable Declaration
  float length;
  float breadth;
  float area;

  // --------Input Section--------
  printf("--------Area Calculator--------\n");
  printf("-----------Rectangle-----------\n");
  printf("Enter the length and breadth: ");
  
  // Input Validation
  if(scanf("%f %f", &length, &breadth) != 2)
  {
      printf("Error!\n");
      return 1;
  }

  // Loop for valid input registration
  do
    {
      if(length <= 0)
      {
        printf("Invalid length, Enter length again(Positive number): ");
        if(scanf("%f", &length) != 1)
        {
          printf("Error!");
          return 3;
        }
      }
      if(breadth <= 0)
      {
        printf("Invalid breadth, Enter breadth again(Positive number): ");
        if(scanf("%f", &breadth)!= 1)
        {
          printf("Error!");
          return 4;
        }
      }
    }while(length <= 0 || breadth <= 0);

  // --------Processing Section--------
  area = length * breadth;

  // --------Output Section--------
  printf("\nArea of Rectangle: %.2f\n", area);

  return 0;
}
  

  
