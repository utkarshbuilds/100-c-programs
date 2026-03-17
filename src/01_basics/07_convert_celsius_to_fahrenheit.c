/*
Program: Celsius to Fahrenheit Converter.
Description: Takes temperature in Celsius, converts it to Fahrenheit, and prints the result.
Date: 17-Mar-2026
Input: Temperature in Celsius(float)
Output: Temprature in Fahrenheit(float)
Version: 1.0
Author: Utkarsh Raj
*/

#include <stdio.h>

// -------- Conversion Ratio --------
#define RATIO (9.0 / 5.0)

int main()
{
  // Variable Declaration
  float celsius
  float fahrenheit;

  // -------- Input Section --------
  printf("Temperature Converter\n");
  printf("-------------------------------\n");
  printf("Enter temperature in Celsius(°C): ");

  if(scanf("%f", &celsius) != 1)
  {
      printf("Error\n");
      return 1;
  }

  // -------- Processing Section --------
  fahrenheit = (RATIO * celsius) + 32;

  // -------- Output Section --------
  printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);

  return 0;
}
