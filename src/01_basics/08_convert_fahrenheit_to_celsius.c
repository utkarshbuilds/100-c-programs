/* 
Program: Fahrenheit to Celsius Converter.
Description: Takes temperature in Fahrenheit, converts it to Celsius, and prints the result.
Date: 17-Mar-2026
Input: Temperature in Fahrenheit(float)
Output: Temperature in Celsius(float)
Version: 1.0
Author: Utkarsh Raj
*/

#include <stdio.h>

// -------- Conversion Ratio (5/9) --------
#define RATIO (5.0 / 9.0)

int main()
{
  // Variable Declaration
  float celsius;
  float fahrenheit;

  // -------- Input Section --------
  printf("Temperature Converter\n");
  printf("----------------------\n");
  printf("Enter temperature in Fahrenheit(F): ");

  if(scanf("%f", &fahrenheit) != 1)
  {
    printf("Error\n");
    return 1;
  }

  // -------- Processing Section --------
  celsius = RATIO * (fahrenheit - 32);

  // -------- Output Section --------
  printf("Temperature in Celsius: %.2fC\n", celsius);

  return 0;
}
