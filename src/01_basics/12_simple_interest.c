/*
Program: Simple Interest Calculator
Description: This program takes principal, rate, time as the input and prints the SI as the output, calculated using formula((P*r*t)/100)).
*/

#include <stdio.h>

int main()
{
  // Variable Declaration
  float principal, rate, time;
  float simple_interest;

  // --------Input Section--------
  // Input validation and valid input registration
  do
  {
      printf("Enter Principal, Rate And Time(All Positive): ");
  }while(scanf("%f %f %f", &principal, &rate, &time) != 3 || principal <= 0 || rate <= 0 || time <= 0);

  // --------Processing Section--------
  simple_interest = ((principal * rate * time) / 100);

  // --------Output Section--------
  printf("--------Simple Interest--------\n");
  printf("%.2f\n", simple_interest");
  return 0;
}
  

  
