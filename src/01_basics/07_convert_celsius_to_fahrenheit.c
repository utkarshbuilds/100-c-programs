/*
Program: Convert Temperature from Celsius to Fahrenheit.
Description: Takes temperature in Celsius, converts it to Fahrenheit, and prints the result.
Author: Utkarsh Raj
*/

#include <stdio.h>

int main()
{
  // Variable Declaration
  float celsius, fahrenheit;

  // -------- Input Section --------
  printf("Enter temperature value: ");
  scanf("%f", &celsius);

  // -------- Processing Section --------
  fahrenheit = (1.8 * celsius) + 32;

  // -------- Output Section --------
  printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

  return 0;
}
