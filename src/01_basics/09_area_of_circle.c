/*
Program: Area Calculator(Circle)
Description: Takes radius of circle as input, print area as result.
Date: 17-Mar-2026
Input: Radius(float)
Output: Area(float)
Version: 1.0
Author: Utkarsh Raj
*/

#include <stdio.h>

// -------- Constant Section --------
#define PI 3.141

int main()
{
  // Variable Declaration
  float radius;
  float area;

  // -------- Program Header --------
  printf("---------- Area Calculator ----------\n");
  printf("----------     Circle      ----------\n");

  // -------- Input Section --------
  printf("Enter the Radius of Circle: ");
  if(scanf("%f", &radius) != 1)
  {
      printf("Error\n");
      return 1;
  }

  // -------- Processing Section --------
  area = PI * radius * radius;

  // -------- Output Section --------
  printf("Area: %.2f\n", area);
  return 0;
}
  
