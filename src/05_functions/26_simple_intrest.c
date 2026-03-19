/*
Program: Simple Interest Calculator
Description: This program takes principal, rate, time as the input and prints the SI as the output, calculated using formula((P*r*t)/100)).
Date: 19-Mar-2026
Input: Principal(float), rate(float), time(float)
Output: SI(float)
Version: 2.0
Author: Utkarsh Raj
*/

#include <stdio.h>

// Macro Function Declaration
#define SIMPLE_INTEREST(p, r, t) ((p * r * t)/100)


// Input Data Function
void get_valid_input(float *principal, float *rate, float *time)
{
  do
  {
      printf("Enter Principal, Rate and Time(All Positive): ");
  }while(scanf("%f %f %f", principal, rate, time) != 3 || *principal <= 0 || *rate <= 0 || *time <= 0);
}


// Function for calculating Simple_interest
float calculate_simple_interest(float principal, float rate, float time)
{
  return SIMPLE_INTEREST(principal, rate, time);
}


int main()
{
  // Variable Declaration
  float principal, rate, time;

  // --------Input Section--------
  get_valid_input(&principal, &rate, &time);

  // --------Output Section--------
  printf("SI: %.2f\n", calculate_simple_interest(principal, rate, time));
  return 0;
}
  

  

      
