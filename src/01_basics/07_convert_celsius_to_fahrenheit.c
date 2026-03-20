/*
Program: Celsius to Fahrenheit Converter.
Description: Takes temperature in Celsius, converts it to Fahrenheit, and prints the result.
Author: Utkarsh Raj
*/

#include <stdio.h>

// -------- Conversion Ratio --------
#define RATIO (9.0 / 5.0)

int main()
{
  // Variable Declaration
  float celsius;
  float fahrenheit;

  // -------- Input Section --------
  printf("Temperature Converter\n");
  printf("-------------------------------\n");
  printf("Enter temperature in Celsius(C): ");

  if(scanf("%f", &celsius) != 1)
  {
      printf("Error\n");
      return 1;
  }

  // -------- Processing Section --------
  fahrenheit = (RATIO * celsius) + 32;

  // -------- Output Section --------
  printf("Temperature in Fahrenheit: %.2fF\n", fahrenheit);

  return 0;
}
