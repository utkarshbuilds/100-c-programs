/*
Program: Compound Interest Calculator
Description: Takes Principal, Rate, Time and prints compound interest as result. 
Date: 19-Mar-2026
Input: Principal(float), Rate(float), Time(float)
Output: Compound Interest(float)
Version: 1.0
Author: Utkarsh Raj
*/


#include <stdio.h>

int main()
{
  // Variable Declaration
  float principal, rate, time;
  float compound_interest;
  float factor = 1.0;

  //--------Input Section--------
  printf("--------Compound Interest Calculator--------\n");
  
  do
  {
      printf("\nEnter Principal, Rate and Time(all Positive): ");
  }while(scanf("%f %f %f", &principal, &rate, &time) != 3 || principal <= 0 || rate <= 0 || time <= 0);

  //--------Processing Section--------
  for(int i = 0; i < (int)time; i++)
  {
      factor *= (1 + (rate / 100));
  }
  compound_interest = (principal * factor) - principal;

  //--------Output Section--------
  printf("\nCompound Interest: %.2f\n", compound_interest);
  return 0;
}


  

